// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHIDUISENSORMODEASSERTION_H
#define SBHIDUISENSORMODEASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDUISensorModeController.h"

@interface SBHIDUISensorModeAssertion : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger digitizerMode; // ivar: _digitizerMode
@property (nonatomic) NSInteger displayState; // ivar: _displayState
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pocketTouchesExpected; // ivar: _pocketTouchesExpected
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (weak, nonatomic) SBHIDUISensorModeController *sensorModeController; // ivar: _sensorModeController
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendProximitySensor; // ivar: _suspendProximitySensor


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invalidate;


@end


#endif