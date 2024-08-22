// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLLACTIONMESSAGE_H
#define _ICLLACTIONMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_ICLLAddQueueItemsAction.h"
#import "_ICLLClientInfoAction.h"
#import "_ICLLCurrentItemChangeAction.h"
#import "_ICLLMoveQueueItemAction.h"
#import "_ICLLParticipantChangeAction.h"
#import "_ICLLPlayNowQueueItemsAction.h"
#import "_ICLLPlaybackControlSettingsAction.h"
#import "_ICLLPlaybackSyncAction.h"
#import "_ICLLReactionAction.h"
#import "_ICLLRemoveQueueItemAction.h"
#import "_ICLLReplaceQueueItemsAction.h"
#import "_ICLLServerNoticeAction.h"
#import "_ICLLSetExplicitModeAction.h"

@interface _ICLLActionMessage : PBCodable <NSCopying>

 {
    NSInteger _originatorId;
    int _action;
    _ICLLAddQueueItemsAction *_addItems;
    _ICLLClientInfoAction *_clientInfo;
    _ICLLCurrentItemChangeAction *_currentItemChange;
    _ICLLMoveQueueItemAction *_moveItem;
    NSString *_originatorUUID;
    _ICLLParticipantChangeAction *_participantChange;
    _ICLLPlayNowQueueItemsAction *_playNowQueueItems;
    _ICLLPlaybackControlSettingsAction *_playbackControlSettings;
    _ICLLPlaybackSyncAction *_playbackSync;
    _ICLLReactionAction *_reaction;
    _ICLLRemoveQueueItemAction *_removeItem;
    _ICLLReplaceQueueItemsAction *_replaceQueueItems;
    _ICLLServerNoticeAction *_serverNotice;
    _ICLLSetExplicitModeAction *_setExplicitMode;
    BOOL _displayNotice;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif