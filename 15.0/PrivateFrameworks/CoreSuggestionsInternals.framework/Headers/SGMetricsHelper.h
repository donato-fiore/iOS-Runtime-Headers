// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMETRICSHELPER_H
#define SGMETRICSHELPER_H


#import <Foundation/Foundation.h>


@interface SGMetricsHelper : NSObject



+(id)asyncQueue;
+(void)_recordConversationTurnWithDetail:(id)arg0 received:(BOOL)arg1 throughApp:(id)arg2 withStore:(id)arg3 ;
+(void)recordConversationTurnWithDetail:(id)arg0 received:(BOOL)arg1 throughApp:(id)arg2 withStore:(id)arg3 ;


@end


#endif