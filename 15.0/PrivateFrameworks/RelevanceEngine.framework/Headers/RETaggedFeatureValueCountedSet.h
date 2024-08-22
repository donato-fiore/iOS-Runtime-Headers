// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RETAGGEDFEATUREVALUECOUNTEDSET_H
#define RETAGGEDFEATUREVALUECOUNTEDSET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying>

 {
    *__CFBag _bag;
}


@property (readonly) NSUInteger count;


-(BOOL)containsFeatureValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countForFeatureValue:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addFeatureValue:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateFeatureValuesUsingBlock:(id)arg0 ;
-(void)removeFeatureValue:(NSUInteger)arg0 ;


@end


#endif