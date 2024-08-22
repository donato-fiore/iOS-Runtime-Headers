// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COALARMSNOOZENOTIFICATION_H
#define COALARMSNOOZENOTIFICATION_H

@class NSString;


#import "COMeshNotification.h"

@interface COAlarmSnoozeNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithAlarmIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif