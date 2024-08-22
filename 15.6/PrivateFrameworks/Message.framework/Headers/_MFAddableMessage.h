// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFADDABLEMESSAGE_H
#define _MFADDABLEMESSAGE_H

@class NSArray, NSDate, NSString, NSUUID, ECMessageFlags, NSDictionary, NSSet, ECAngleBracketIDHash, ECSubject;
@protocol ECMessage, ECMailAccount, ECMimePart, ECMessageHeaders, ECMailbox;

#import <Foundation/Foundation.h>

#import "MFLibraryMessage.h"

@interface _MFAddableMessage : NSObject <ECMessage>

 {
    NSInteger _messageIDHash;
}


@property (readonly, nonatomic) NSObject<ECMailAccount> *account;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, nonatomic) NSObject<ECMimePart> *bodyPart;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, nonatomic) NSInteger conversationID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSUUID *documentID;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ECMessageHeaders> *headers;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) MFLibraryMessage *libraryMessage; // ivar: _libraryMessage
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) NSObject<ECMailbox> *mailbox;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly, nonatomic) NSUInteger numberOfAttachments;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSArray *references;
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, copy, nonatomic) ECSubject *subject;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *to;
@property (readonly, copy, nonatomic) NSString *urlString; // ivar: _urlString


-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)messageIDHash;
-(id)bestAlternativePart:(*BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithLibraryMessage:(id)arg0 messageIDHash:(NSInteger)arg1 mailboxURL:(id)arg2 ;


@end


#endif