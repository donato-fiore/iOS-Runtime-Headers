// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIVPPAMANAGER_H
#define VUIVPPAMANAGER_H


#import <Foundation/Foundation.h>

#import "VUIAccessViewController.h"

@interface VUIVPPAManager : NSObject

@property (retain, nonatomic) VUIAccessViewController *accessViewController; // ivar: _accessViewController
@property (nonatomic) BOOL alreadyInProgress; // ivar: _alreadyInProgress


+(BOOL)_isReminderDue:(id)arg0 reminderInterval:(CGFloat)arg1 ;
+(BOOL)channelAlreadyExists:(id)arg0 channelID:(id)arg1 ;
+(id)_getConsentedChannels;
+(id)_getDeniedChannels;
+(id)addUniqueChannels:(id)arg0 channels:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)_isChannelVPPAPromptEligible:(id)arg0 ;
-(BOOL)_isVPPAPromptDueForConfig:(id)arg0 ;
-(id)_getEligibleBulkChannels;
-(id)_getVPPABulkChannels:(NSInteger)arg0 ;
-(id)_rootViewController;
-(id)init;
-(void)_fetchConfigurationAndPresentVPPAIfRequired:(id)arg0 completion:(id)arg1 ;
-(void)_presentVPPAConsentScreen:(id)arg0 vppaState:(NSInteger)arg1 completion:(id)arg2 ;
-(void)reloadConfigurationAfterVPPAChange;
-(void)startVPPAConsentFlow:(id)arg0 completion:(id)arg1 ;
-(void)startVPPAConsentFlowForDeeplink:(id)arg0 completion:(id)arg1 ;


@end


#endif