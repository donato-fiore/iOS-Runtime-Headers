// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRECALIBRATEESTIMATESPRESENTATIONCONTROLLER_H
#define HKRECALIBRATEESTIMATESPRESENTATIONCONTROLLER_H

@class NSString, _UIAsyncInvocation;
@protocol HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController;

#import <Foundation/Foundation.h>

#import "HKHealthPrivacyHostRecalibrateEstimatesViewController.h"

@interface HKRecalibrateEstimatesPresentationController : NSObject <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent; // ivar: _didPresent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthPrivacyHostRecalibrateEstimatesViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation; // ivar: _requestCancellationInvocation
@property (readonly) Class superclass;


-(void)_dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)_makeRemoteViewControllerVisible:(id)arg0 ;
// -(void)_requestAndConfigureHostViewController:(id)arg0 completion:(unk)arg1  ;
-(void)dealloc;
-(void)healthPrivacyHostRecalibrateEstimatesControllerDidFinishWithError:(id)arg0 ;
-(void)presentWithRequestRecord:(id)arg0 completion:(id)arg1 ;


@end


#endif