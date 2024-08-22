// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCACHEMETRICSCOLLECTORCLIENT_H
#define PLCACHEMETRICSCOLLECTORCLIENT_H


#import <Foundation/Foundation.h>


@interface PLCacheMetricsCollectorClient : NSObject



-(id)initWithAssetsdClient:(id)arg0 ;
-(void)incrementImageCacheHitCount;
-(void)incrementImageCacheMissCount;
-(void)incrementVideoComplementCacheHitCount;
-(void)incrementVideoComplementCacheMissCount;


@end


#endif