// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGBLOODPRESSUREINTENT_H
#define LOGBLOODPRESSUREINTENT_H

@class INIntent, NSString;



@interface LogBloodPressureIntent : INIntent

@property (nonatomic) CGFloat diastolic;
@property (nonatomic) CGFloat systolic;
@property (nonatomic, copy) NSString *unit;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif