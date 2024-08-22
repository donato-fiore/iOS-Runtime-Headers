// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEINFO_H
#define MFMESSAGEINFO_H

@class NSString;
@protocol MFBaseMessage, NSCopying;

#import <Foundation/Foundation.h>


@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying>

 {
    BOOL _flagged;
    BOOL _read;
    BOOL _deleted;
    BOOL _uidIsLibraryID;
    BOOL _hasAttachments;
    BOOL _isVIP;
    BOOL _isHighPriority;
}


@property (readonly, nonatomic) NSInteger conversationHash;
@property (nonatomic) NSInteger conversationHash; // ivar: _conversationHash
@property (readonly, nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateReceivedInterval; // ivar: _dateReceivedInterval
@property (readonly, nonatomic) unsigned int dateSentInterval;
@property (nonatomic) unsigned int dateSentInterval; // ivar: _dateSentInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deleted;
@property (nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL flagged;
@property (nonatomic) BOOL flagged;
@property (readonly, nonatomic) NSInteger generationNumber; // ivar: _generationNumber
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVIP;
@property (readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (readonly, nonatomic) unsigned int libraryID;
@property (readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property (readonly, nonatomic) unsigned int mailboxID;
@property (nonatomic) unsigned int mailboxID; // ivar: _mailboxID
@property (readonly, nonatomic) NSInteger messageIDHash;
@property (nonatomic) NSInteger messageIDHash; // ivar: _messageIDHash
@property (readonly, nonatomic) BOOL read;
@property (nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL senderVIP;
@property (nonatomic) unsigned int sortDateReceivedInterval; // ivar: _sortDateReceivedInterval
@property (nonatomic) unsigned int sortUid; // ivar: _sortUid
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int uid;
@property (nonatomic) unsigned int uid; // ivar: _uid
@property (nonatomic) BOOL uidIsLibraryID;


+(NSInteger)newGenerationNumber;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)generationCompare:(id)arg0 ;
-(id)_flagDescription;
-(id)copyMessageInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithUid:(unsigned int)arg0 mailboxID:(unsigned int)arg1 messageID:(NSInteger)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(NSInteger)arg5 read:(BOOL)arg6 knownToHaveAttachments:(BOOL)arg7 flagged:(BOOL)arg8 isVIP:(BOOL)arg9 ;


@end


#endif