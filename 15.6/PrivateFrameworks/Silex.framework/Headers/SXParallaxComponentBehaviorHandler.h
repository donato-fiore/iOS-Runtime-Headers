// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPARALLAXCOMPONENTBEHAVIORHANDLER_H
#define SXPARALLAXCOMPONENTBEHAVIORHANDLER_H



#import "SXComponentBehaviorHandler.h"

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler

@property (nonatomic) CGRect absoluteContentViewFrame; // ivar: _absoluteContentViewFrame
@property (nonatomic) int direction; // ivar: _direction
@property (readonly, nonatomic) CGFloat factor; // ivar: _factor
@property (nonatomic) BOOL inFirstViewport; // ivar: _inFirstViewport
@property (nonatomic) BOOL inLastViewport; // ivar: _inLastViewport
@property (readonly, nonatomic) BOOL isRotating; // ivar: _isRotating


-(BOOL)requiresContinuousUpdates;
-(id)initWithComponentView:(id)arg0 withBehavior:(id)arg1 ;
-(void)destroyWithBehaviorController:(id)arg0 ;
-(void)setupWithBehaviorController:(id)arg0 ;
-(void)updateWithBehaviorController:(id)arg0 ;


@end


#endif