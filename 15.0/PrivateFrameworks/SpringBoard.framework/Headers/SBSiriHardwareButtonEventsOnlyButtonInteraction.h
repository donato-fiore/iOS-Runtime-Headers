// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSIRIHARDWAREBUTTONEVENTSONLYBUTTONINTERACTION_H
#define SBSIRIHARDWAREBUTTONEVENTSONLYBUTTONINTERACTION_H

@class NSString;
@protocol SBHardwareButtonInteraction;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBSiriHardwareButtonInteraction.h"

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBSiriHardwareButtonInteraction *parentSiriInteraction; // ivar: _parentSiriInteraction
@property (nonatomic) NSInteger siriButtonIdentifier; // ivar: _siriButtonIdentifier
@property (readonly) Class superclass;


+(id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)arg0 ;
-(BOOL)consumeSinglePressUp;


@end


#endif