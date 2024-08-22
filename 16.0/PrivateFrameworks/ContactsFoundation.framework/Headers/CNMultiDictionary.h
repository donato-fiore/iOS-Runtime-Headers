// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMULTIDICTIONARY_H
#define CNMULTIDICTIONARY_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_entries;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;


+(id)multiDictionary;
+(id)multiDictionaryWithObject:(id)arg0 forKey:(id)arg1 ;
-(BOOL)containsKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEntries:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectsForKey:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 ;
-(void)eachObject:(id)arg0 ;


@end


#endif