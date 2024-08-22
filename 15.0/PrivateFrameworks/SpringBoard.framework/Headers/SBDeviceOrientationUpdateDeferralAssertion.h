// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEORIENTATIONUPDATEDEFERRALASSERTION_H
#define SBDEVICEORIENTATIONUPDATEDEFERRALASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBDeviceOrientationUpdateManager.h"

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic, setter=_setHackyBackReference:) SBDeviceOrientationUpdateManager *hackyBackReference; // ivar: _hackyBackReference
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)init;
-(id)initWithReason:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif