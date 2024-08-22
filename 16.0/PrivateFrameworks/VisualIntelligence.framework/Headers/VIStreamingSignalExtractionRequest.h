// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VISTREAMINGSIGNALEXTRACTIONREQUEST_H
#define VISTREAMINGSIGNALEXTRACTIONREQUEST_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "VIStreamingFrame.h"
#import "VIQueryContext.h"

@interface VIStreamingSignalExtractionRequest : NSObject

@property (readonly, nonatomic) VIStreamingFrame *highResolutionFrame; // ivar: _highResolutionFrame
@property (readonly, nonatomic) NSUUID *objectUUID; // ivar: _objectUUID
@property (readonly, nonatomic) VIQueryContext *queryContext; // ivar: _queryContext


-(id)initWithObjectUUID:(id)arg0 highResolutionFrame:(id)arg1 queryContext:(id)arg2 ;


@end


#endif