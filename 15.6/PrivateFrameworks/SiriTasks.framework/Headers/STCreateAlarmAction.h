// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCREATEALARMACTION_H
#define STCREATEALARMACTION_H

@class STAlarm;


#import "STAlarmAction.h"

@interface STCreateAlarmAction : STAlarmAction {
    STAlarm *_alarm;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithAlarm:(id)arg0 ;
-(id)alarm;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif