// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTRUCTUREDEVENTTRIALCLIENTWRAPPER_H
#define SGSTRUCTUREDEVENTTRIALCLIENTWRAPPER_H

@class _PASLock;


#import "SGTrialClientWrapper.h"

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(BOOL)foundInMailNotifications;
-(id)baseModelName;
-(id)engineConfig;
-(id)init;
-(id)notificationsAllowListOverride;
-(id)structuredEventInputMapping;
-(id)structuredEventOutputMapping;
-(id)supportedProviders;
-(void)updateFactors;


@end


#endif