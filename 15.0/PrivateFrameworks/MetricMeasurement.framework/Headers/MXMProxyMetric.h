// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMPROXYMETRIC_H
#define MXMPROXYMETRIC_H



#import "MXMMetric.h"
#import "MXMProbe.h"

@interface MXMProxyMetric : MXMMetric

@property (readonly, copy) MXMProbe *_remoteProbe;
@property (readonly, retain) MXMMetric *_underlyingMetric; // ivar: __underlyingMetric
@property (readonly, copy) MXMMetric *metric;


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldAlwaysWrapInProxy;
-(BOOL)_shouldConstructProbe;
-(BOOL)_shouldNeverWrapInProxy;
-(BOOL)prepareWithOptions:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_sampleMode;
-(id)_constructProbe;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetric:(id)arg0 ;
-(void)didStartAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 startDate:(id)arg2 ;
-(void)didStartAtTime:(NSUInteger)arg0 startDate:(id)arg1 ;
-(void)didStopAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 stopDate:(id)arg2 ;
-(void)didStopAtTime:(NSUInteger)arg0 stopDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)willStartAtEstimatedTime:(NSUInteger)arg0 ;
-(void)willStop;


@end


#endif