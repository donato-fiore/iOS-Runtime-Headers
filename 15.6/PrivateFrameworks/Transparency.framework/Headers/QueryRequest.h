// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QUERYREQUEST_H
#define QUERYREQUEST_H

@class NSString, NSData;


#import "GPBMessage.h"

@interface QueryRequest : GPBMessage

@property (nonatomic) int application;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSData *uriVrfOutput;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif