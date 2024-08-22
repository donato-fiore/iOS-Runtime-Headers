// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIDOWNLOADLATENCYTASKRESULTTELEMETRYBUILDER_H
#define TRIDOWNLOADLATENCYTASKRESULTTELEMETRYBUILDER_H

@class NSMutableDictionary;
@protocol TRILatencyMetricTelemetryValidating;

#import <Foundation/Foundation.h>


@interface TRIDownloadLatencyTaskResultTelemetryBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *telemetryForDeployment; // ivar: _telemetryForDeployment
@property (readonly, nonatomic) NSObject<TRILatencyMetricTelemetryValidating> *validator; // ivar: _validator


-(id)builtTelemetry;
-(id)initWithTelemetryValidator:(id)arg0 ;
-(void)_handleActivationTask:(id)arg0 runResult:(id)arg1 ;
-(void)_handleFetchTask:(id)arg0 runResult:(id)arg1 ;
-(void)_updateBuiltTelemetryWithDeployment:(id)arg0 rolloutFields:(id)arg1 downloadStatus:(int)arg2 ;
-(void)updateWithTask:(id)arg0 runResult:(id)arg1 ;


@end


#endif