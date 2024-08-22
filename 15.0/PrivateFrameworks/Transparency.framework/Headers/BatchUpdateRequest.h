// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BATCHUPDATEREQUEST_H
#define BATCHUPDATEREQUEST_H

@class NSData, NSString, NSMutableArray;


#import "GPBMessage.h"

@interface BatchUpdateRequest : GPBMessage

@property (copy, nonatomic) NSData *deviceId;
@property (copy, nonatomic) NSString *requestUuid;
@property (retain, nonatomic) NSMutableArray *updatesArray;
@property (readonly, nonatomic) NSUInteger updatesArray_Count;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif