// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCOLLABORATIONNOTICERATELIMITER_H
#define IMDCOLLABORATIONNOTICERATELIMITER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory; // ivar: _noticeEventHistory
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue; // ivar: _persistenceQueue


+(NSInteger)commentThreshold;
+(NSInteger)defaultThreshold;
+(NSInteger)participantChangeThreshold;
+(id)loadNoticeEventHistory;
+(id)peristencePath;
-(BOOL)shouldSendNotice:(id)arg0 ;
-(NSInteger)thresholdForNoticeType:(NSInteger)arg0 ;
-(id)dateLastUpdatedForURL:(id)arg0 ;
-(id)init;
-(void)didSendNotice:(id)arg0 ;
-(void)saveNoticeEventHistory;


@end


#endif