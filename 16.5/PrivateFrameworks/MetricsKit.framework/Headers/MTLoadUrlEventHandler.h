// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLOADURLEVENTHANDLER_H
#define MTLOADURLEVENTHANDLER_H

@class NSString;
@protocol MTPerfBaseMeasurementTransformation, MTLoadUrlEventHandlerDelegate;


#import "MTEventHandler.h"

@interface MTLoadUrlEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTLoadUrlEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dnsServersIPAddresses:(id)arg0 ;
-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)metricsDataWithPerfMeasurement:(id)arg0 ;
-(id)xpSamplingPercentageUsers:(id)arg0 ;
-(id)xpSessionDuration:(id)arg0 ;


@end


#endif