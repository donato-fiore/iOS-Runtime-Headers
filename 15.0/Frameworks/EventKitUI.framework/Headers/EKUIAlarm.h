// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIALARM_H
#define EKUIALARM_H

@class EKAlarm;

#import <Foundation/Foundation.h>


@interface EKUIAlarm : NSObject

@property (readonly, nonatomic) EKAlarm *alarm; // ivar: _alarm
@property (readonly, nonatomic) BOOL isLeaveNowAlarm; // ivar: _isLeaveNowAlarm


-(BOOL)isEqualToUIAlarm:(id)arg0 ;
-(id)description;
-(id)initLeaveNowAlarm;
-(id)initWithAlarm:(id)arg0 ;
-(id)localizedDescriptionAllDay:(BOOL)arg0 ;


@end


#endif