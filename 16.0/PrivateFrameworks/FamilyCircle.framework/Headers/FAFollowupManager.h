// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFOLLOWUPMANAGER_H
#define FAFOLLOWUPMANAGER_H


#import <Foundation/Foundation.h>


@interface FAFollowupManager : NSObject



+(id)_followupManager;
+(void)synchronizeFollowupWithPayload:(id)arg0 altDSID:(id)arg1 ;
+(void)tearDownFollowupItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)teardownPendingFollowup;


@end


#endif