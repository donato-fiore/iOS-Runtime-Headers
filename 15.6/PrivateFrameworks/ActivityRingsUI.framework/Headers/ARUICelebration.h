// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUICELEBRATION_H
#define ARUICELEBRATION_H

@class _TtC3VFX8VFXScene;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARUICelebration : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) _TtC3VFX8VFXScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)apply:(id)arg0 context:(id)arg1 ;
-(void)updateDeltaTime:(CGFloat)arg0 ;


@end


#endif