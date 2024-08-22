// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOMMUNICATIONPOLICYMANAGER_H
#define SBCOMMUNICATIONPOLICYMANAGER_H

@class NSDictionary, DMFCommunicationPolicyMonitor;

#import <Foundation/Foundation.h>


@interface SBCommunicationPolicyManager : NSObject {
    NSDictionary *_policiesByBundleIdentifier;
    DMFCommunicationPolicyMonitor *_communicationPolicyMonitor;
}




+(id)sharedInstance;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif