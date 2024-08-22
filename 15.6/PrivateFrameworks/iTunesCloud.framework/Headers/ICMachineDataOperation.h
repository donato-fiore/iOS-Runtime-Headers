// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMACHINEDATAOPERATION_H
#define ICMACHINEDATAOPERATION_H

@class NSData;


#import "ICAsyncOperation.h"
#import "ICStoreRequestContext.h"

@interface ICMachineDataOperation : ICAsyncOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext




@end


#endif