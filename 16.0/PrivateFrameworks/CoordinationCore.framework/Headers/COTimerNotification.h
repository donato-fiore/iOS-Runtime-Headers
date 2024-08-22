// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COTIMERNOTIFICATION_H
#define COTIMERNOTIFICATION_H

@class NSArray;


#import "COMeshNotification.h"

@interface COTimerNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSArray *timers; // ivar: _timers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif