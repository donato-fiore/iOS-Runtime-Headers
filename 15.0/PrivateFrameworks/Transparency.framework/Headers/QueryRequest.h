// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUERYREQUEST_H
#define QUERYREQUEST_H

@class NSData, NSMutableArray, NSString;


#import "GPBMessage.h"

@interface QueryRequest : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (nonatomic) int application;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (readonly, nonatomic) NSUInteger devicesArray_Count;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *uriVrfOutput;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif