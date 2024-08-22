// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLPANNINGCONTEXT_H
#define HUQUICKCONTROLPANNINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface HUQuickControlPanningContext : NSObject

@property (nonatomic) CGRect controlFrame; // ivar: _controlFrame
@property (nonatomic) CGFloat initialSliderValue; // ivar: _initialSliderValue
@property (nonatomic) BOOL requiresSomeMovementBeforeActivation; // ivar: _requiresSomeMovementBeforeActivation
@property (nonatomic) CGFloat verticalDragCoefficient; // ivar: _verticalDragCoefficient


-(id)init;
-(void)assertConfigurationIsValid;


@end


#endif