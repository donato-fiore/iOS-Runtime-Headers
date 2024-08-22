// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCMINISINFENDPOINTINFO_H
#define _MPCMINISINFENDPOINTINFO_H

@class NSURL, ICStoreRequestContext;

#import <Foundation/Foundation.h>


@interface _MPCMiniSINFEndpointInfo : NSObject

@property (readonly, copy, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (readonly, nonatomic) NSInteger maximumBatchSize; // ivar: _maximumBatchSize
@property (readonly, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext


-(id)initWithEndpointURL:(id)arg0 maximumBatchSize:(NSInteger)arg1 requestContext:(id)arg2 ;


@end


#endif