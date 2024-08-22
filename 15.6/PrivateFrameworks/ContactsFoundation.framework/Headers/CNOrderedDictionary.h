// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNORDEREDDICTIONARY_H
#define CNORDEREDDICTIONARY_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}


@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;


+(id)dictionaryWithObject:(id)arg0 forKey:(id)arg1 ;
+(id)orderedDictionary;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif