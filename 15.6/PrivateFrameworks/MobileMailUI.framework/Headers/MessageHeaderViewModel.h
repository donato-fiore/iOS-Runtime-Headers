// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MESSAGEHEADERVIEWMODEL_H
#define MESSAGEHEADERVIEWMODEL_H

@class NSArray, NSDate, NSString, NSIndexSet, MFMailboxUid, EFObservable, EFObservable<EFObserver>, ECSubject;
@protocol MessageHeaderViewModelBuilder, NSCopying;


#import "MessageItemViewModel.h"
#import "MFAddressAtomStatusManager.h"

@interface MessageHeaderViewModel : MessageItemViewModel <MessageHeaderViewModelBuilder, NSCopying>



@property (nonatomic, getter=isVIP) BOOL VIP;
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager; // ivar: _atomManager
@property (copy, nonatomic) NSArray *bccList; // ivar: _bccList
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender;
@property (copy, nonatomic) NSArray *ccList; // ivar: _ccList
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isFlagged) BOOL flagged;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic) BOOL hasAttachments;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MFMailboxUid *mailbox; // ivar: _mailbox
@property (readonly, nonatomic) EFObservable *modelObservable;
@property (nonatomic, getter=isMute) BOOL mute;
@property (nonatomic, getter=isNotify) BOOL notify;
@property (retain, nonatomic) EFObservable<EFObserver> *observableObserver; // ivar: _observableObserver
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isReplied) BOOL replied;
@property (copy, nonatomic) NSArray *senderList; // ivar: _senderList
@property (copy, nonatomic) ECSubject *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *toList; // ivar: _toList


-(BOOL)_flagsChangedInModel:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithItemBuilder:(id)arg0 ;
-(id)updatedFlagsModelWithBuilder:(id)arg0 ;
-(id)updatedModelWithMessage:(id)arg0 ;


@end


#endif