// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMPROXYSERVICEMANAGER_H
#define MXMPROXYSERVICEMANAGER_H

@class NSXPCConnection;
@protocol MetricMeasurementHelperProtocol_Internal;

#import <Foundation/Foundation.h>


@interface MXMProxyServiceManager : NSObject

@property (readonly) NSObject<MetricMeasurementHelperProtocol_Internal> *_proxyObject;
@property (readonly) NSXPCConnection *_serviceConnection; // ivar: __serviceConnection


+(id)shared;
-(BOOL)wake;
-(id)_sampleWithProxyMetric:(id)arg0 timeout:(CGFloat)arg1 stopReason:(*NSUInteger)arg2 ;
-(id)initInternal;
-(void)_quiesceBeforeIteration:(CGFloat)arg0 timeout:(CGFloat)arg1 response:(id)arg2 ;
-(void)_startPerformanceTrace:(id)arg0 response:(id)arg1 ;
-(void)_stopPerformanceTrace:(id)arg0 ;
-(void)dealloc;


@end


#endif