// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKDATETIMEINPUTCONTROL_H
#define WKDATETIMEINPUTCONTROL_H

@class NSString;


#import "WKFormPeripheralBase.h"

@interface WKDateTimeInputControl : WKFormPeripheralBase

@property (readonly, nonatomic) NSString *dateTimePickerCalendarType;
@property (readonly, nonatomic) CGFloat timePickerValueHour;
@property (readonly, nonatomic) CGFloat timePickerValueMinute;


-(id)initWithView:(id)arg0 ;
-(void)setTimePickerHour:(NSInteger)arg0 minute:(NSInteger)arg1 ;


@end


#endif