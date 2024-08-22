// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORBASICTEXTMESSAGE_H
#define BLASTDOORBASICTEXTMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorBasicTextMessageMessageTypeWrapper.h"
#import "BlastDoorMetadata.h"

@interface BlastDoorBasicTextMessage : NSObject {
    ? basicTextMessage;
}


@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger encryptionType;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSUInteger groupParticipantVersion;
@property (nonatomic, readonly) NSUInteger groupProtocolVersion;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) BlastDoorBasicTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;


-(id)init;


@end


#endif