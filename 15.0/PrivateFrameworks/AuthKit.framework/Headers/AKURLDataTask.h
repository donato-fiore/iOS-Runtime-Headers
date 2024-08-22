// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKURLDATATASK_H
#define AKURLDATATASK_H

@class NSError, NSMutableData, NSURLRequest, NSURLSessionDataTask;

#import <Foundation/Foundation.h>


@interface AKURLDataTask : NSObject

@property (nonatomic) BOOL canceledOrCompleted; // ivar: _canceledOrCompleted
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSError *lastRetryError; // ivar: _lastRetryError
@property (retain, nonatomic) NSMutableData *receivedData; // ivar: _receivedData
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) NSURLSessionDataTask *underlyingTask; // ivar: _underlyingTask


-(id)description;
-(void)_completeWithError:(id)arg0 ;


@end


#endif