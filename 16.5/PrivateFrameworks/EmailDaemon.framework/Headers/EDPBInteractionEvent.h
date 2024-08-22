// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPBINTERACTIONEVENT_H
#define EDPBINTERACTIONEVENT_H

@class PBCodable;
@protocol EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying;


#import "EDPBInteractionEventAppBackground.h"
#import "EDPBInteractionEventAppLaunch.h"
#import "EDPBInteractionEventAppResume.h"
#import "EDPBInteractionEventCategoryInferred.h"
#import "EDPBInteractionEventCategoryMarked.h"
#import "EDPBInteractionEventFlagChanged.h"
#import "EDPBInteractionEventForwardDraftStarted.h"
#import "EDPBInteractionEventForwardSent.h"
#import "EDPBInteractionEventLinkClicked.h"
#import "EDPBInteractionEventMarkedMuteThread.h"
#import "EDPBInteractionEventMessageCopied.h"
#import "EDPBInteractionEventMessageFetched.h"
#import "EDPBInteractionEventMessageMoved.h"
#import "EDPBInteractionEventMessageSent.h"
#import "EDPBInteractionEventMessageViewEnd.h"
#import "EDPBInteractionEventMessageViewStart.h"
#import "EDPBInteractionEventReadChanged.h"
#import "EDPBInteractionEventReplyDraftStarted.h"
#import "EDPBInteractionEventReplySent.h"

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) EDPBInteractionEventAppBackground *appBackground; // ivar: _appBackground
@property (retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch; // ivar: _appLaunch
@property (retain, nonatomic) EDPBInteractionEventAppResume *appResume; // ivar: _appResume
@property (retain, nonatomic) EDPBInteractionEventCategoryInferred *categoryInferred; // ivar: _categoryInferred
@property (retain, nonatomic) EDPBInteractionEventCategoryMarked *categoryMarked; // ivar: _categoryMarked
@property (nonatomic) int eventName; // ivar: _eventName
@property (retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged; // ivar: _flagChanged
@property (retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted; // ivar: _forwardDraftStarted
@property (retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent; // ivar: _forwardSent
@property (readonly, nonatomic) BOOL hasAppBackground;
@property (readonly, nonatomic) BOOL hasAppLaunch;
@property (readonly, nonatomic) BOOL hasAppResume;
@property (readonly, nonatomic) BOOL hasCategoryInferred;
@property (readonly, nonatomic) BOOL hasCategoryMarked;
@property (nonatomic) BOOL hasEventName;
@property (readonly, nonatomic) BOOL hasFlagChanged;
@property (readonly, nonatomic) BOOL hasForwardDraftStarted;
@property (readonly, nonatomic) BOOL hasForwardSent;
@property (readonly, nonatomic) BOOL hasLinkClicked;
@property (readonly, nonatomic) BOOL hasMarkedMuteThread;
@property (readonly, nonatomic) BOOL hasMessageCopied;
@property (readonly, nonatomic) BOOL hasMessageFetched;
@property (readonly, nonatomic) BOOL hasMessageMoved;
@property (readonly, nonatomic) BOOL hasMessageSent;
@property (readonly, nonatomic) BOOL hasMessageViewEnd;
@property (readonly, nonatomic) BOOL hasMessageViewStart;
@property (readonly, nonatomic) BOOL hasReadChanged;
@property (readonly, nonatomic) BOOL hasReplyDraftStarted;
@property (readonly, nonatomic) BOOL hasReplySent;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked; // ivar: _linkClicked
@property (retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread; // ivar: _markedMuteThread
@property (retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied; // ivar: _messageCopied
@property (retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched; // ivar: _messageFetched
@property (retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved; // ivar: _messageMoved
@property (retain, nonatomic) EDPBInteractionEventMessageSent *messageSent; // ivar: _messageSent
@property (retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd; // ivar: _messageViewEnd
@property (retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart; // ivar: _messageViewStart
@property (retain, nonatomic) EDPBInteractionEventReadChanged *readChanged; // ivar: _readChanged
@property (retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted; // ivar: _replyDraftStarted
@property (retain, nonatomic) EDPBInteractionEventReplySent *replySent; // ivar: _replySent
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ed_oneOfConcreteEvent;
-(id)eventNameAsString:(int)arg0 ;
-(int)StringAsEventName:(id)arg0 ;
-(int)messageFrameType;
-(void)copyTo:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif