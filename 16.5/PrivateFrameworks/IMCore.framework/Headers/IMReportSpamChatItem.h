// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMREPORTSPAMCHATITEM_H
#define IMREPORTSPAMCHATITEM_H



#import "IMTranscriptChatItem.h"

@interface IMReportSpamChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL hasMultipleMessages; // ivar: _hasMultipleMessages
@property (readonly, nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (readonly, nonatomic) BOOL showReportSMSSpam; // ivar: _showReportSMSSpam
@property (readonly, nonatomic) BOOL wasReportedAsSpam; // ivar: _wasReportedAsSpam


-(id)_initWithItem:(id)arg0 wasReportedAsSpam:(BOOL)arg1 isGroup:(BOOL)arg2 hasMultipleMessages:(BOOL)arg3 showReportSMSSpam:(BOOL)arg4 ;


@end


#endif