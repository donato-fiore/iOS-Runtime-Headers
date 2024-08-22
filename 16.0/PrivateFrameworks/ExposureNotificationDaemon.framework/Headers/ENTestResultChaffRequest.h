// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTESTRESULTCHAFFREQUEST_H
#define ENTESTRESULTCHAFFREQUEST_H

@class NSString;


#import "ENTestResultNetworkRequest.h"

@interface ENTestResultChaffRequest : ENTestResultNetworkRequest

@property (copy, nonatomic) NSString *chaffValue; // ivar: _chaffValue


-(id)additionalRequestHeaders;


@end


#endif