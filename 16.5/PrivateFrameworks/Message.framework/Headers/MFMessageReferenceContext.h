// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGEREFERENCECONTEXT_H
#define MFMESSAGEREFERENCECONTEXT_H

@class NSArray, NSMutableDictionary, NSSet, EFMutableInt64Set, ECSubject;
@protocol ECEmailAddressConvertible;

#import <Foundation/Foundation.h>

#import "MFMailMessage.h"

@interface MFMessageReferenceContext : NSObject

@property (copy, nonatomic) NSObject<ECEmailAddressConvertible> *bcc; // ivar: _bcc
@property (copy, nonatomic) NSArray *bccList; // ivar: _bccList
@property (copy, nonatomic) NSObject<ECEmailAddressConvertible> *cc; // ivar: _cc
@property (copy, nonatomic) NSArray *ccList; // ivar: _ccList
@property (nonatomic) *NSUInteger conversationFlagsRef; // ivar: _conversationFlagsRef
@property (nonatomic) NSInteger conversationIDHash; // ivar: _conversationIDHash
@property (nonatomic) CGFloat dateSentInterval; // ivar: _dateSentInterval
@property (nonatomic) NSInteger libraryID; // ivar: _libraryID
@property (nonatomic) NSInteger mailboxID; // ivar: _mailboxID
@property (retain, nonatomic) MFMailMessage *message; // ivar: _message
@property (nonatomic) NSInteger messageIDHash; // ivar: _messageIDHash
@property (retain, nonatomic) NSMutableDictionary *messageIDsBySubject; // ivar: _messageIDsBySubject
@property (readonly, nonatomic) NSSet *participants;
@property (retain, nonatomic) EFMutableInt64Set *references; // ivar: _references
@property (copy, nonatomic) NSObject<ECEmailAddressConvertible> *sender; // ivar: _sender
@property (copy, nonatomic) NSArray *senderList; // ivar: _senderList
@property (copy, nonatomic) ECSubject *subject; // ivar: _subject
@property (copy, nonatomic) NSObject<ECEmailAddressConvertible> *to; // ivar: _to
@property (copy, nonatomic) NSArray *toList; // ivar: _toList




@end


#endif