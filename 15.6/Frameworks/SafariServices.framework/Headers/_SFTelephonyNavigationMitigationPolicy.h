// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFTELEPHONYNAVIGATIONMITIGATIONPOLICY_H
#define _SFTELEPHONYNAVIGATIONMITIGATIONPOLICY_H

@class NSDate;
@protocol SFDialogPresenting;

#import <Foundation/Foundation.h>


@interface _SFTelephonyNavigationMitigationPolicy : NSObject {
    NSInteger _classification;
    NSDate *_dateUserLastDeclined;
}


@property (weak, nonatomic) NSObject<SFDialogPresenting> *dialogPresenter; // ivar: _dialogPresenter


+(CGFloat)test_suspiciousClassificationExpirationDuration;
-(BOOL)policyAppliesToURL:(id)arg0 ;
-(void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
-(void)_handleInput:(NSInteger)arg0 ;
-(void)handleNavigationToURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)userAcceptedCallPrompt;
-(void)userDeclinedCallPrompt;


@end


#endif