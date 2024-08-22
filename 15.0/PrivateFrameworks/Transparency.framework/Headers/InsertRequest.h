// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSERTREQUEST_H
#define INSERTREQUEST_H

@class NSData, NSString;


#import "GPBMessage.h"

@interface InsertRequest : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (nonatomic) BOOL accountMismatch;
@property (nonatomic) NSUInteger appVersion;
@property (nonatomic) int application;
@property (copy, nonatomic) NSData *clientData;
@property (copy, nonatomic) NSData *deviceId;
@property (copy, nonatomic) NSString *requestUuid;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif