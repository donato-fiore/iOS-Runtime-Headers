// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHARACTERISTICBATCHREQUEST_H
#define HMCHARACTERISTICBATCHREQUEST_H


#import <Foundation/Foundation.h>

#import "HMBatchRequest.h"

@interface HMCharacteristicBatchRequest : NSObject

@property (retain, nonatomic) HMBatchRequest *batchRequest; // ivar: _batchRequest
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


+(id)characteristicBatchRequestWithReadRequests:(id)arg0 ;
+(id)characteristicBatchRequestWithWriteRequests:(id)arg0 ;
-(id)initWithBatchRequest:(id)arg0 ;
-(id)requests;


@end


#endif