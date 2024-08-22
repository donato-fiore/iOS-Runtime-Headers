// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDANALYTICSHISTOGRAMEVENT_H
#define HIDANALYTICSHISTOGRAMEVENT_H



#import "HIDAnalyticsEvent.h"
#import "HIDAnalyticsHistogramEventField.h"

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {
    HIDAnalyticsHistogramEventField *_field;
    BOOL _isUpdated;
}




-(id)initWithAttributes:(id)arg0 description:(id)arg1 ;
-(id)value;
-(void)addField:(id)arg0 ;
-(void)addHistogramFieldWithSegments:(id)arg0 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg1 count:(NSInteger)arg2 ;
-(void)setIntegerValue:(NSUInteger)arg0 ;
-(void)setIntegerValue:(NSUInteger)arg0 forField:(id)arg1 ;
-(void)setValue:(id)arg0 ;


@end


#endif