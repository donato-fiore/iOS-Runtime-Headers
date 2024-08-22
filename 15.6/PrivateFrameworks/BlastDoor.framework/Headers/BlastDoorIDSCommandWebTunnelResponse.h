// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORIDSCOMMANDWEBTUNNELRESPONSE_H
#define BLASTDOORIDSCOMMANDWEBTUNNELRESPONSE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "BlastDoorAPSUserPayloadHttpHeaders.h"

@interface BlastDoorIDSCommandWebTunnelResponse : NSObject {
    ? iDSCommandWebTunnelResponse;
}


@property (nonatomic, readonly) NSInteger command;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger epochTimeNanos;
@property (nonatomic, readonly) BOOL has_epochTimeNanos;
@property (nonatomic, readonly) BOOL has_httpResponseStatus;
@property (nonatomic, readonly) BOOL has_messageId;
@property (nonatomic, readonly) BOOL has_responseStatus;
@property (nonatomic, readonly) NSData *httpBody;
@property (nonatomic, readonly) NSData *httpBodyKey;
@property (nonatomic, readonly) NSString *httpBodyUrl;
@property (nonatomic, readonly) NSString *httpErrorMsg;
@property (nonatomic, readonly) BlastDoorAPSUserPayloadHttpHeaders *httpHeaders;
@property (nonatomic, readonly) NSInteger httpResponseStatus;
@property (nonatomic, readonly) NSString *httpUrl;
@property (nonatomic, readonly) NSInteger messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) NSInteger responseStatus;


-(id)init;


@end


#endif