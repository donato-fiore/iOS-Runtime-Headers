// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOCLOCKALARMMANAGER_H
#define SOCLOCKALARMMANAGER_H

@class AFInstanceContext, NSMutableDictionary, MTAlarmManager;

#import <Foundation/Foundation.h>


@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTAlarmManager *_mtAlarmManager;
}




+(void)warmUp;
-(id)_registeredObservations;
-(id)addAlarm:(id)arg0 ;
-(id)alarms;
-(id)alarmsIncludingSleepAlarm:(BOOL)arg0 ;
-(id)dismissAlarmWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(id)removeAlarm:(id)arg0 ;
-(id)updateAlarm:(id)arg0 ;
// -(void)addHandler:(id)arg0 forEvent:(unk)arg1  ;
-(void)checkIn;
-(void)removeHandlerForEvent:(NSInteger)arg0 ;


@end


#endif