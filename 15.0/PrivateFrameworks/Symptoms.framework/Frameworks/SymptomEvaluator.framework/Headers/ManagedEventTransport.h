// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDEVENTTRANSPORT_H
#define MANAGEDEVENTTRANSPORT_H

@class NSMutableDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ManagedEventTransport : NSObject {
    NSUInteger _event_id;
    NSObject<OS_xpc_object> *_listener;
    NSMutableDictionary *_dynamicEventHandlers;
    NSMutableDictionary *_staticEventHandlers;
}




+(BOOL)setInfoProvider:(id)arg0 forId:(NSUInteger)arg1 ;
+(NSUInteger)obtainEventId:(id)arg0 ;
+(id)feedbackForEventId:(NSUInteger)arg0 ;
+(id)sharedInstance;
+(void)retireEventId:(NSUInteger)arg0 ;
+(void)setListeningPort:(char *)arg0 ;
-(BOOL)setInfoProvider:(id)arg0 forId:(NSUInteger)arg1 ;
-(NSUInteger)obtainEventId:(id)arg0 ;
-(id)feedbackForEventId:(NSUInteger)arg0 ;
-(id)init;
-(void)_createReply:(id)arg0 forConnection:(id)arg1 ;
-(void)retireEventId:(NSUInteger)arg0 ;
-(void)sendReplyInfo:(id)arg0 onConnection:(id)arg1 withErrCode:(NSUInteger)arg2 forId:(NSUInteger)arg3 name:(char *)arg4 date:(id)arg5 reason:(char *)arg6 reasonCode:(NSUInteger)arg7 info:(id)arg8 ;
-(void)setListeningPort:(char *)arg0 ;


@end


#endif