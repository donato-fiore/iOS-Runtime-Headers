// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKAGENT3D_H
#define GKAGENT3D_H



#import "GKAgent.h"

@interface GKAgent3D : GKAgent

@property ? position;
@property (nonatomic) BOOL rightHanded;
@property (nonatomic) ? rotation;
@property ? velocity;


-(id)initWithCoder:(id)arg0 ;
-(void)applyBrakingForce:(float)arg0 deltaTime:(CGFloat)arg1 ;
-(void)applySteeringForce:(CGFloat)arg0 deltaTime;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;


@end


#endif