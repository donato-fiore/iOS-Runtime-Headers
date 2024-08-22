// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MESSAGEITEMVIEWMODEL_H
#define MESSAGEITEMVIEWMODEL_H

@class NSDate, NSString, NSIndexSet, EMFollowUp;
@protocol MessageItemViewModelBuilder;

#import <Foundation/Foundation.h>


@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder>



@property (nonatomic, getter=isVIP) BOOL VIP; // ivar: _VIP
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender; // ivar: _blockedSender
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (copy, nonatomic) NSIndexSet *flagColors; // ivar: _flagColors
@property (nonatomic, getter=isFlagged) BOOL flagged; // ivar: _flagged
@property (copy, nonatomic) EMFollowUp *followUp; // ivar: _followUp
@property (nonatomic, getter=isForwarded) BOOL forwarded; // ivar: _forwarded
@property (nonatomic) BOOL hasAttachments; // ivar: _hasAttachments
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMute) BOOL mute; // ivar: _mute
@property (nonatomic, getter=isNotify) BOOL notify; // ivar: _notify
@property (nonatomic, getter=isRead) BOOL read; // ivar: _read
@property (copy, nonatomic) NSDate *readLaterDate; // ivar: _readLaterDate
@property (nonatomic, getter=isReplied) BOOL replied; // ivar: _replied
@property (copy, nonatomic) NSDate *sendLaterDate; // ivar: _sendLaterDate
@property (readonly) Class superclass;
@property (nonatomic, getter=isUnscreenedSender) BOOL unscreenedSender; // ivar: _unscreenedSender
@property (nonatomic) NSInteger unsubscribeType; // ivar: _unsubscribeType


-(id)initWithItemBuilder:(id)arg0 ;


@end


#endif