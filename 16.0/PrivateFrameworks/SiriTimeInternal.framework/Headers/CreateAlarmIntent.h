// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CREATEALARMINTENT_H
#define CREATEALARMINTENT_H

@class INIntent, NSNumber, NSString, NSArray, NSDateComponents;



@interface CreateAlarmIntent : INIntent

@property (nonatomic, retain) NSNumber *isMeridianInferred;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *relativeOffsetInMinutes;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, copy) NSDateComponents *time;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif