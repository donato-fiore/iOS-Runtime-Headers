// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCOLLABORATIONCLEARNOTICERATELIMITER_H
#define IMDCOLLABORATIONCLEARNOTICERATELIMITER_H


#import <Foundation/Foundation.h>


@interface IMDCollaborationClearNoticeRateLimiter : NSObject {
    ? rateLimiterOverride;
    ? persistenceQueue;
    ? noticeEventHistory;
}




-(BOOL)shouldSendWithNotice:(id)arg0 ;
-(id)init;
-(void)didSendWithNotice:(id)arg0 ;


@end


#endif