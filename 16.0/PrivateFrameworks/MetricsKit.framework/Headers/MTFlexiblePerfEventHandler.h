// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFLEXIBLEPERFEVENTHANDLER_H
#define MTFLEXIBLEPERFEVENTHANDLER_H

@class NSString;
@protocol MTPerfBaseMeasurementTransformation, MTFlexiblePerfEventHandlerDelegate;


#import "MTEventHandler.h"

@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTFlexiblePerfEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)mtIncludeBaseFields;
-(id)knownFields;
-(id)metricsDataWithEventType:(id)arg0 eventData:(id)arg1 ;
-(id)metricsDataWithPerfMeasurement:(id)arg0 ;
-(id)xpSamplingPercentage:(id)arg0 ;


@end


#endif