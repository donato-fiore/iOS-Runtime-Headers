// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGUNIFORMSCACHEKEY_H
#define ARUIRINGUNIFORMSCACHEKEY_H


#import <Foundation/Foundation.h>


@interface ARUIRingUniformsCacheKey : NSObject

@property (readonly, nonatomic) NSUInteger hashValue; // ivar: _hashValue


+(id)keyForRing:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithRing:(id)arg0 context:(id)arg1 ;


@end


#endif