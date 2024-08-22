// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKBATCHEDREQUEST_H
#define NNMKBATCHEDREQUEST_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NNMKProtoFetchRequest.h"

@interface NNMKBatchedRequest : NSObject

@property (retain, nonatomic) NNMKProtoFetchRequest *latestFetchRequest; // ivar: _latestFetchRequest
@property (retain, nonatomic) NSMutableDictionary *messagesToBeSentInBatch; // ivar: _messagesToBeSentInBatch


-(id)diffFromMessages:(id)arg0 maxMessagesToAdd:(NSUInteger)arg1 ;
-(id)init;


@end


#endif