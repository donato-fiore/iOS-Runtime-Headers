// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTCLIENTREPLYTIMEOUTMANAGER_H
#define BLTCLIENTREPLYTIMEOUTMANAGER_H

@class PCPersistentTimer, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTClientReplyTimeoutManager : NSObject {
    PCPersistentTimer *_clientReplyTimeoutTimer;
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}




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