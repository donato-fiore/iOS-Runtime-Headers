// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOWCLOCKINTENT_H
#define SHOWCLOCKINTENT_H

@class INIntent, CLPlacemark, NSDateComponents;



@interface ShowClockIntent : INIntent

@property (nonatomic) NSInteger clockRequestType;
@property (nonatomic) NSInteger dayOfWeek;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic, copy) NSDateComponents *offset;
@property (nonatomic, copy) NSDateComponents *referenceDate;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif