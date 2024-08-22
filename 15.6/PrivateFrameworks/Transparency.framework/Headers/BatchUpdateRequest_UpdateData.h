// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BATCHUPDATEREQUEST_UPDATEDATA_H
#define BATCHUPDATEREQUEST_UPDATEDATA_H

@class NSData, NSString;


#import "GPBMessage.h"

@interface BatchUpdateRequest_UpdateData : GPBMessage

@property (copy, nonatomic) NSData *accountKey;
@property (nonatomic) BOOL accountMismatch;
@property (nonatomic) NSUInteger appVersion;
@property (nonatomic) int application;
@property (copy, nonatomic) NSData *clientData;
@property (copy, nonatomic) NSData *deviceId;
@property (nonatomic) NSUInteger expiryMs;
@property (nonatomic) BOOL optIn;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *uri;


+(id)descriptor;


@end


#endif