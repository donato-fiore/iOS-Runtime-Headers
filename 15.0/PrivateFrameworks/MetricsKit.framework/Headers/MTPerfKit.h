// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPERFKIT_H
#define MTPERFKIT_H



#import "MTMetricsKitTemplate.h"

@interface MTPerfKit : MTMetricsKitTemplate



-(id)flexibleMeasurementWithEventType:(id)arg0 ;
-(id)flexibleMeasurementWithEventType:(id)arg0 eventData:(id)arg1 ;
-(id)initWithTopic:(id)arg0 ;
-(id)loadUrlMeasurement;
-(id)loadUrlMeasurementWithEventData:(id)arg0 ;
-(id)pageRenderMeasurementWithPageId:(id)arg0 pageType:(id)arg1 pageContext:(id)arg2 ;
-(id)pageRenderMeasurementWithPageId:(id)arg0 pageType:(id)arg1 pageContext:(id)arg2 eventData:(id)arg3 ;


@end


#endif