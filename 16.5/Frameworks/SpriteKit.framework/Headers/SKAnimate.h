// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKANIMATE_H
#define SKANIMATE_H

@class NSArray;


#import "SKAction.h"

@interface SKAnimate : SKAction {
    *void _mycaction;
    NSArray *_textures;
}


@property (nonatomic) CGFloat timePerFrame;


+(BOOL)supportsSecureCoding;
+(id)animateWithNormalTextures:(id)arg0 timePerFrame:(CGFloat)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3 ;
+(id)animateWithTextures:(id)arg0 timePerFrame:(CGFloat)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;


@end


#endif