// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUISPRITEUNIFORMSCACHEKEY_H
#define ARUISPRITEUNIFORMSCACHEKEY_H


#import <Foundation/Foundation.h>


@interface ARUISpriteUniformsCacheKey : NSObject

@property (readonly, nonatomic) NSUInteger hashValue; // ivar: _hashValue


+(id)keyForSprite:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSprite:(id)arg0 context:(id)arg1 ;


@end


#endif