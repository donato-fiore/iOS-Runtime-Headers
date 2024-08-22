// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEDETAILS_H
#define MFMESSAGEDETAILS_H

@class NSString;
@protocol MFBaseMessage;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"
#import "MFMailboxUid.h"

@interface MFMessageDetails : NSObject <MFBaseMessage>

 {
    MFMailMessageLibrary *library;
}


@property (readonly, nonatomic) NSInteger conversationHash; // ivar: conversationHash
@property (readonly, nonatomic) unsigned int dateReceivedInterval; // ivar: dateReceived
@property (readonly, nonatomic) unsigned int dateSentInterval; // ivar: dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalID; // ivar: externalID
@property (readonly, nonatomic) BOOL flagged;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic) NSInteger libraryID; // ivar: libraryID
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, weak, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) NSInteger mailboxID; // ivar: mailboxID
@property (readonly, nonatomic) NSUInteger messageFlags; // ivar: messageFlags
@property (readonly, nonatomic) NSInteger messageIDHash; // ivar: messageIDHash
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int uid; // ivar: uid


-(BOOL)isEqual:(id)arg0 ;
-(id)copyMessageInfo;
-(id)messageID;
-(id)remoteID;


@end


#endif