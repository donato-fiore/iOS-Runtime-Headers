// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUICREATEEVENTINTENT_H
#define EKUICREATEEVENTINTENT_H

@class INIntent, NSNumber, INObject, CLPlacemark, NSString;



@interface EKUICreateEventIntent : INIntent

@property (copy, nonatomic) NSNumber *allDay;
@property (copy, nonatomic) INObject *endDate;
@property (copy, nonatomic) CLPlacemark *geolocation;
@property (copy, nonatomic) NSString *locationAddress;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) INObject *startDate;
@property (copy, nonatomic) NSString *title;




@end


#endif