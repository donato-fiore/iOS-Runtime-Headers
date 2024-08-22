// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAMAILBOXREQUEST_H
#define DAMAILBOXREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAMailboxRequest : NSObject

@property (nonatomic) int bodyFormat; // ivar: _bodyFormat
@property (copy, nonatomic) NSString *messageID; // ivar: _messageID
@property (nonatomic) int requestType; // ivar: _requestType


-(id)init;


@end


#endif