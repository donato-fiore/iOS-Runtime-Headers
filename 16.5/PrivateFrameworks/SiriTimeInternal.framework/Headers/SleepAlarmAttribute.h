// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLEEPALARMATTRIBUTE_H
#define SLEEPALARMATTRIBUTE_H

@class INObject, NSDateComponents, NSNumber;



@interface SleepAlarmAttribute : INObject

@property (nonatomic, copy) NSDateComponents *bedtime;
@property (nonatomic, retain) NSNumber *override;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif