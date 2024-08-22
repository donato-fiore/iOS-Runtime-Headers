// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCOMMSAFETYSUMMARY_H
#define IMCOMMSAFETYSUMMARY_H


#import <Foundation/Foundation.h>


@interface IMCommSafetySummary : NSObject



+(id)primaryiCloudAccountIdentifier;
+(id)recipientStrings:(id)arg0 ;
+(void)registerEvent:(NSUInteger)arg0 eventType:(NSUInteger)arg1 messageGUID:(id)arg2 chat:(id)arg3 forImages:(id)arg4 ;
+(void)registerEvent:(NSUInteger)arg0 eventType:(NSUInteger)arg1 messageGUID:(id)arg2 chat:(id)arg3 forImages:(id)arg4 childID:(id)arg5 deviceID:(id)arg6 senderID:(id)arg7 eventSender:(id)arg8 ;


@end


#endif