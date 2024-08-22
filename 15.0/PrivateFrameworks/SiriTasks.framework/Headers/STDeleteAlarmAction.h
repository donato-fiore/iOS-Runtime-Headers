// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDELETEALARMACTION_H
#define STDELETEALARMACTION_H

@class NSArray;


#import "STAlarmAction.h"

@interface STDeleteAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithAlarmIds:(id)arg0 ;
-(id)alarmIds;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif