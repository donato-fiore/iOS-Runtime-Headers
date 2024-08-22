// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBMUTEEXPIRATIONMANAGER_H
#define BBMUTEEXPIRATIONMANAGER_H

@class NSMutableDictionary;
@protocol BBMuteExpirationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BBMuteExpirationManager : NSObject

@property (weak, nonatomic) NSObject<BBMuteExpirationManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *timersBySectionID; // ivar: _timersBySectionID


-(BOOL)cleanAndWatchExpirationsForSectionInfo:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)scheduledExpirationDateForSectionID:(id)arg0 ;
-(void)_cancelTimerForSectionID:(id)arg0 ;
-(void)_queue_triggerDidFireForExpiryTimer:(id)arg0 ;
-(void)dealloc;
-(void)stopWatchingExpirationsForSectionID:(id)arg0 ;


@end


#endif