// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBLASTDOOR_H
#define IMBLASTDOOR_H


#import <Foundation/Foundation.h>


@interface IMBlastdoor : NSObject



+(BOOL)_commandReadyForBlastdoor:(NSInteger)arg0 ;
+(BOOL)_messageBlastdoorMetricsEnabled;
+(BOOL)supportsFeature:(id)arg0 ;
+(NSInteger)_convertErrorToBlastdoorError:(id)arg0 ;
+(id)blastdoorInterface;
+(id)logger;
+(void)_askToTapToRadarForGUID:(id)arg0 messageTypeString:(id)arg1 sender:(id)arg2 errorString:(id)arg3 payloadAttachmentURL:(id)arg4 ;
+(void)sendBlastDoorError:(id)arg0 guid:(id)arg1 messageTypeString:(id)arg2 senderURI:(id)arg3 senderToken:(id)arg4 messageContext:(id)arg5 payloadAttachmentURL:(id)arg6 ;
+(void)sendCollaborationNoticeActionDictionary:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)sendCollaborationNoticeData:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)sendDictionary:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)sendSMSDictionary:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif