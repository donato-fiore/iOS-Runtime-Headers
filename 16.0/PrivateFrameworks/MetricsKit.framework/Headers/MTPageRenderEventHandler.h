// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPAGERENDEREVENTHANDLER_H
#define MTPAGERENDEREVENTHANDLER_H

@class NSString;
@protocol MTPerfBaseMeasurementTransformation, MTPageRenderEventHandlerDelegate;


#import "MTEventHandler.h"

@interface MTPageRenderEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTPageRenderEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)metricsDataWithPageId:(id)arg0 pageType:(id)arg1 pageContext:(id)arg2 eventData:(id)arg3 ;
-(id)metricsDataWithPerfMeasurement:(id)arg0 ;
-(id)xpSamplingPercentageUsers:(id)arg0 ;
-(id)xpSessionDuration:(id)arg0 ;
-(void)didCreateMetricsData:(id)arg0 ;


@end


#endif