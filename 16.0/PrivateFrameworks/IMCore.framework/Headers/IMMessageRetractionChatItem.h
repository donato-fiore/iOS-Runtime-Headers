// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMESSAGERETRACTIONCHATITEM_H
#define IMMESSAGERETRACTIONCHATITEM_H

@class NSString, NSArray;


#import "IMTranscriptChatItem.h"
#import "IMMessage.h"
#import "IMHandle.h"

@interface IMMessageRetractionChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL canRetryFailedRetraction;
@property (readonly, nonatomic) BOOL isFailedRetraction; // ivar: _isFailedRetraction
@property (readonly, nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) NSInteger partIndex; // ivar: _partIndex
@property (readonly, nonatomic) NSUInteger replyCount;
@property (readonly, copy, nonatomic) NSArray *retractionUnsupportedByHandles; // ivar: _retractionUnsupportedByHandles
@property (readonly, copy, nonatomic) IMHandle *sender; // ivar: _sender
@property (readonly, copy, nonatomic) NSString *threadIdentifier;


-(BOOL)canDelete;
-(id)_initWithItem:(id)arg0 partIndex:(NSInteger)arg1 isFailedRetraction:(BOOL)arg2 retractionUnsupportedByHandles:(id)arg3 sender:(id)arg4 isFromMe:(BOOL)arg5 ;
-(id)_retractedMessageItem;


@end


#endif