// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYMANAGER_H
#define HDCLOUDSYNCSHAREDSUMMARYMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDCloudSyncSharedSummaryManager : NSObject {
    HDProfile *_profile;
}




+(void)unitTesting_setUrgentLatency:(CGFloat)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)pull:(id)arg0 ;
-(id)push:(id)arg0 ;
-(id)revokeParticipantWithOutgoingSummarySharingEntry:(id)arg0 completion:(id)arg1 ;
-(id)setupSharingWithOutgoingSummarySharingEntry:(id)arg0 sharingAuthorizations:(id)arg1 completion:(id)arg2 ;
-(id)synchronizeWithCompletion:(id)arg0 ;
-(void)scheduleBackgroundPush;
-(void)scheduleUrgentPush;


@end


#endif