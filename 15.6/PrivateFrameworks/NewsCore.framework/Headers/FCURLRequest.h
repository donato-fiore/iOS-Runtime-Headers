// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCURLREQUEST_H
#define FCURLREQUEST_H

@class NSURLRequest, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface FCURLRequest : NSObject {
    NSURLRequest *_URLRequest;
    NSInteger _destination;
    NSInteger _priority;
    NSDate *_dateInitiated;
    NSString *_loggingKey;
    id *_completion;
    NSInteger _remainingRetries;
}




-(id)description;


@end


#endif