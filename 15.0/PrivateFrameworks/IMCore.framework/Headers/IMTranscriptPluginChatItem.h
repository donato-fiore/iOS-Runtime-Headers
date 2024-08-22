// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTRANSCRIPTPLUGINCHATITEM_H
#define IMTRANSCRIPTPLUGINCHATITEM_H

@class NSString;
@protocol IMPluginChatItemProtocol;


#import "IMMessagePartChatItem.h"
#import "IMBalloonPluginDataSource.h"
#import "IMPluginPayload.h"

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSetIsLastChatItemOfPluginType; // ivar: _hasSetIsLastChatItemOfPluginType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMPluginPayload *initialPayload; // ivar: _initialPayload
@property (readonly, nonatomic) BOOL isDataSourceInitialized;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic, setter=setLastChatItemOfPluginType:) BOOL isLastChatItemOfPluginType; // ivar: _isLastChatItemOfPluginType
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (readonly, nonatomic) BOOL parentChatHasKnownParticipants; // ivar: _parentChatHasKnownParticipants
@property (readonly, nonatomic) NSUInteger playbackType;
@property (readonly, nonatomic) NSString *pluginSessionGUID;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *type;


-(BOOL)wantsAutoPlayback;
-(id)_initWithItem:(id)arg0 initialPayload:(id)arg1 index:(NSInteger)arg2 messagePartRange:(struct _NSRange )arg3 parentChatHasKnownParticipants:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)replyContextPreviewChatItemForReply:(id)arg0 chatContext:(id)arg1 ;


@end


#endif