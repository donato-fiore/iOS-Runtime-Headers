// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLACTIONMESSAGE_H
#define _ICLLACTIONMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_ICLLAddQueueItemsAction.h"
#import "_ICLLClientInfoAction.h"
#import "_ICLLCurrentItemChangeAction.h"
#import "_ICLLCurrentItemTransitionAction.h"
#import "_ICLLDisplayMessage.h"
#import "_ICLLMoveQueueItemAction.h"
#import "_ICLLParticipantChangeAction.h"
#import "_ICLLPlayNowQueueItemsAction.h"
#import "_ICLLPlaybackSyncAction.h"
#import "_ICLLQueueSyncAction.h"
#import "_ICLLReactionAction.h"
#import "_ICLLRemoveQueueItemAction.h"
#import "_ICLLReplaceQueueItemsAction.h"
#import "_ICLLServerNoticeAction.h"

@interface _ICLLActionMessage : PBCodable <NSCopying>

 {
    NSInteger _originatorId;
    int _action;
    _ICLLAddQueueItemsAction *_addItems;
    _ICLLClientInfoAction *_clientInfo;
    _ICLLCurrentItemChangeAction *_currentItemChange;
    _ICLLCurrentItemTransitionAction *_currentItemTransition;
    _ICLLDisplayMessage *_displayMessage;
    _ICLLMoveQueueItemAction *_moveItem;
    NSString *_originatorUUID;
    _ICLLParticipantChangeAction *_participantChange;
    _ICLLPlayNowQueueItemsAction *_playNowQueueItems;
    _ICLLPlaybackSyncAction *_playbackSync;
    _ICLLQueueSyncAction *_queueSync;
    _ICLLReactionAction *_reaction;
    _ICLLRemoveQueueItemAction *_removeItem;
    _ICLLReplaceQueueItemsAction *_replaceQueueItems;
    _ICLLServerNoticeAction *_serverNotice;
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