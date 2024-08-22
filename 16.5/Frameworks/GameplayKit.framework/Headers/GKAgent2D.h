// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKAGENT2D_H
#define GKAGENT2D_H

@protocol NSSecureCoding;


#import "GKAgent.h"

@interface GKAgent2D : GKAgent <NSSecureCoding>



@property ? position;
@property (nonatomic) float rotation;
@property ? velocity;


-(id)initWithCoder:(id)arg0 ;
-(void)applyBrakingForce:(float)arg0 deltaTime:(CGFloat)arg1 ;
-(void)applySteeringForce:(CGFloat)arg0 deltaTime;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif