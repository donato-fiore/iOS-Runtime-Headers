// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAPPLICATIONDATA_H
#define HMAPPLICATIONDATA_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HMApplicationData : NSObject <NSCopying>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_applicationData;
}


@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (copy) NSDictionary *dictionary;
@property (readonly, getter=isEmpty) BOOL empty;


+(id)allowedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContentsOfDictionary:(id)arg0 ;
-(id)initWithDictionaryFromCoder:(id)arg0 key:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif