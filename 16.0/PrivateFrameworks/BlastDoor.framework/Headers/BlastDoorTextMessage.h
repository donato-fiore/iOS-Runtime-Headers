// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORTEXTMESSAGE_H
#define BLASTDOORTEXTMESSAGE_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "BlastDoorTextMessageMessageTypeWrapper.h"
#import "BlastDoorTextMessage_MessageSummaryInfo.h"
#import "BlastDoorMetadata.h"
#import "BlastDoorNicknameInformation.h"

@interface BlastDoorTextMessage : NSObject {
    ? textMessage;
}


@property (nonatomic, readonly) NSString *availabilityVerificationRecipientChannelIDPrefix;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientEncryptionValidationToken;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger encryptionType;
@property (nonatomic, readonly) NSString *expressiveSendStyleIdentifier;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSUInteger groupParticipantVersion;
@property (nonatomic, readonly) NSUInteger groupPhotoCreationTime;
@property (nonatomic, readonly) NSUInteger groupProtocolVersion;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupPhotoCreationTime;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) BOOL isAutoReply;
@property (nonatomic, readonly) BlastDoorTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) BlastDoorTextMessage_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;
@property (nonatomic, readonly) NSUUID *replyToGUID;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;
@property (nonatomic, readonly) NSString *truncatedNicknameRecordKey;


-(id)init;


@end


#endif