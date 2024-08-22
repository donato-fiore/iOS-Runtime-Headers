// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHIDUILOCKASSERTION_H
#define SBHIDUILOCKASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDInterface.h"

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable>



@property (weak, nonatomic) SBHIDInterface *HIDInterface; // ivar: _HIDInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableTapToWake; // ivar: _disableTapToWake
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pocketTouchesExpected; // ivar: _pocketTouchesExpected
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendMultitouch; // ivar: _suspendMultitouch
@property (nonatomic) BOOL suspendProximitySensor; // ivar: _suspendProximitySensor


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invalidate;
-(void)invalidateForSource:(NSInteger)arg0 ;


@end


#endif