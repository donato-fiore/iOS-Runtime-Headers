// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWALARMACTION_H
#define STSHOWALARMACTION_H

@class NSArray;


#import "STAlarmAction.h"

@interface STShowAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithAlarmIds:(id)arg0 ;
-(id)alarmIds;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif