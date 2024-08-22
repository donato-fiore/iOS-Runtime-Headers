// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTHORIZONREQUEST_H
#define VNDETECTHORIZONREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectHorizonRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;


@end


#endif