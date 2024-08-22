// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTORESOURCE_H
#define BMSTORESOURCE_H

@class BMStreamDatastoreWriter;


#import "BMSource.h"
#import "BMStreamsAccessClient.h"
#import "BMComputeSourceClient.h"

@interface BMStoreSource : BMSource {
    BMStreamDatastoreWriter *_writer;
    BMStreamsAccessClient *_accessClient;
    BOOL _shouldSendMetrics;
}


@property (readonly, nonatomic) BMComputeSourceClient *computeSource; // ivar: _computeSource
@property (readonly, nonatomic) BOOL isPublicStream; // ivar: _isPublicStream


-(id)initWithIdentifier:(id)arg0 storeConfig:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 storeConfig:(id)arg1 accessClient:(id)arg2 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)sendEvent:(id)arg0 timestampNumber:(id)arg1 notifyCompute:(BOOL)arg2 ;


@end


#endif