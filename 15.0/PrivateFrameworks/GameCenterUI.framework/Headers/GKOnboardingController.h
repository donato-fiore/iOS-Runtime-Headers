// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKONBOARDINGCONTROLLER_H
#define GKONBOARDINGCONTROLLER_H

@protocol GKOnboardingFlowDelegate;

#import <Foundation/Foundation.h>


@interface GKOnboardingController : NSObject

@property (weak, nonatomic) NSObject<GKOnboardingFlowDelegate> *delegate; // ivar: _delegate


+(id)shared;
-(BOOL)didShowPrivacyNotice;
-(NSUInteger)getPrivacyNoticeVersion;
-(void)presentPersonalizationScreen:(id)arg0 ;
-(void)presentProfilePrivacyScreen:(id)arg0 ;
-(void)presentViewController:(id)arg0 presentingViewController:(id)arg1 ;


@end


#endif