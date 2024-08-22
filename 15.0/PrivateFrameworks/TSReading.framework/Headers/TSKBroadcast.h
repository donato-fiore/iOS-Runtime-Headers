// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKBROADCAST_H
#define TSKBROADCAST_H


#import <Foundation/Foundation.h>


@interface TSKBroadcast : NSObject



+(void)asyncNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeGroup:(id)arg2 ;
+(void)asyncNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeKind:(int)arg2 details:(id)arg3 changeSource:(id)arg4 ;
+(void)syncNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeGroup:(id)arg2 ;
+(void)syncNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeKind:(int)arg2 details:(id)arg3 changeSource:(id)arg4 ;
+(void)twoPhaseNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeGroup:(id)arg2 ;
+(void)twoPhaseNotificationWithAccessController:(id)arg0 changeNotifier:(id)arg1 changeKind:(int)arg2 details:(id)arg3 changeSource:(id)arg4 ;


@end


#endif