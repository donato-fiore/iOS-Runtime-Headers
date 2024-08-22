// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCLOUDKITTRANSPORTLOGMESSAGE_H
#define IDSCLOUDKITTRANSPORTLOGMESSAGE_H

@class NSString, NSData, ENGroupID, NSDictionary;

#import <Foundation/Foundation.h>

#import "IDSDestinationPushToken.h"

@interface IDSCloudKitTransportLogMessage : NSObject

@property (readonly, nonatomic) NSString *cypherIdentifier;
@property (readonly, nonatomic) IDSDestinationPushToken *destination;
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSData *encryptedPayload;
@property (retain, nonatomic) NSString *encryptionType; // ivar: _encryptionType
@property (readonly, nonatomic) ENGroupID *groupID;
@property (retain, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *recipientAlias;
@property (retain, nonatomic) NSString *secondaryID; // ivar: _secondaryID
@property (readonly, nonatomic) NSString *senderAlias;




@end


#endif