// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNOOZEALARMHALINTENT_H
#define SNOOZEALARMHALINTENT_H

@class INIntent, NSString, NSNumber;



@interface SnoozeAlarmHalIntent : INIntent

@property (nonatomic, copy) NSString *alarmId;
@property (nonatomic, copy) NSString *remoteDeviceId;
@property (nonatomic, copy) NSString *remoteExecutionId;
@property (nonatomic, retain) NSNumber *skipConfirmation;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif