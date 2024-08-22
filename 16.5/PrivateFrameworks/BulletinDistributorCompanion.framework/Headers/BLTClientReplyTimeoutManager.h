// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTCLIENTREPLYTIMEOUTMANAGER_H
#define BLTCLIENTREPLYTIMEOUTMANAGER_H

@class NSMutableArray, SWWakingTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTClientReplyTimeoutManager : NSObject {
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) SWWakingTimer *timer; // ivar: _timer


-(BOOL)invalidateClientReplyTimeout:(id)arg0 ;
-(id)addClientReplyTimeoutForBulletin:(id)arg0 sectionID:(id)arg1 timeout:(CGFloat)arg2 handler:(id)arg3 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_handleClientReplyTimeout;
-(void)_invalidateClientReplyTimer;
-(void)_sortTimeouts;
-(void)_startClientReplyTimerWithFireDate:(id)arg0 ;
-(void)_startNextClientReplyTimer;
-(void)extendClientReplyTimeout:(id)arg0 additionalTime:(NSUInteger)arg1 ;


@end


#endif