// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RADIOGETGENRETREENODESREQUEST_H
#define RADIOGETGENRETREENODESREQUEST_H

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;


#import "RadioRequest.h"

@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    NSUInteger _parentNodeID;
    SSURLConnectionRequest *_request;
}


@property (readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // ivar: _metricsConfiguration
@property (readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // ivar: _metricsPageEvent


+(id)cacheKeyForGenreWithNodeID:(NSUInteger)arg0 ;
+(id)fallbackRequestPath;
+(id)requestBagKey;
+(id)responseContentKey;
-(id)_genreTreeByApplyingResponse:(id)arg0 ;
-(id)init;
-(id)initWithParentNodeID:(NSUInteger)arg0 ;
// -(void)startWithCachedCompletionHandler:(id)arg0 networkCompletionHandler:(unk)arg1  ;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif