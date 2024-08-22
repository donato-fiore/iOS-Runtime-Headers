// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COALARMNOTIFICATION_H
#define COALARMNOTIFICATION_H

@class NSArray;


#import "COMeshNotification.h"

@interface COAlarmNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSArray *alarms; // ivar: _alarms


+(BOOL)supportsSecureCoding;
-(id)initWithAlarms:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif