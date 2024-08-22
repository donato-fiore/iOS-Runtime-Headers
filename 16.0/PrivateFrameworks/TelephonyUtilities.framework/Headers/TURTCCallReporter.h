// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TURTCCALLREPORTER_H
#define TURTCCALLREPORTER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUCallCenter.h"

@interface TURTCCallReporter : NSObject

@property (readonly, nonatomic) TUCallCenter *callCenter; // ivar: _callCenter
@property (readonly, nonatomic) NSMutableDictionary *callUUIDToConversation; // ivar: _callUUIDToConversation
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)clientName:(id)arg0 ;
-(id)initWithCallCenter:(id)arg0 ;
-(id)reportingSessionForCall:(id)arg0 withConversation:(id)arg1 ;
-(id)rtcCallInfoDictionary:(id)arg0 withConversation:(id)arg1 ;
-(id)serviceName:(id)arg0 withConversation:(id)arg1 ;
-(void)callStatusChangedNotification:(id)arg0 ;
-(void)report:(id)arg0 withConversation:(id)arg1 ;


@end


#endif