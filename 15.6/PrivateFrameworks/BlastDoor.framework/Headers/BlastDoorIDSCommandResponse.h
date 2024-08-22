// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORIDSCOMMANDRESPONSE_H
#define BLASTDOORIDSCOMMANDRESPONSE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface BlastDoorIDSCommandResponse : NSObject {
    ? iDSCommandResponse;
}


@property (nonatomic, readonly) NSString *applicationId;
@property (nonatomic, readonly) NSInteger command;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger failReason;
@property (nonatomic, readonly) BOOL has_failReason;
@property (nonatomic, readonly) BOOL has_internalBuild;
@property (nonatomic, readonly) BOOL has_loggingProfile;
@property (nonatomic, readonly) BOOL has_messageId;
@property (nonatomic, readonly) BOOL has_protocolVersion;
@property (nonatomic, readonly) BOOL has_requestType;
@property (nonatomic, readonly) BOOL has_responseStatus;
@property (nonatomic, readonly) BOOL has_sharedSession;
@property (nonatomic, readonly) NSData *idsSessionId;
@property (nonatomic, readonly) BOOL internalBuild;
@property (nonatomic, readonly) BOOL loggingProfile;
@property (nonatomic, readonly) NSInteger messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) NSInteger protocolVersion;
@property (nonatomic, readonly) NSInteger requestType;
@property (nonatomic, readonly) NSInteger responseStatus;
@property (nonatomic, readonly) BOOL sharedSession;
@property (nonatomic, readonly) NSData *token;


-(id)init;


@end


#endif