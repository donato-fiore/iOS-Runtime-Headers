// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFCLOCKALARMMUTATION_H
#define _AFCLOCKALARMMUTATION_H

@class NSUUID, NSURL, NSString, NSDate;
@protocol AFClockAlarmMutating;

#import <Foundation/Foundation.h>

#import "AFClockAlarm.h"

@interface _AFClockAlarmMutation : NSObject <AFClockAlarmMutating>

 {
    AFClockAlarm *_base;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    BOOL _isFiring;
    NSString *_title;
    NSUInteger _type;
    NSUInteger _hour;
    NSUInteger _minute;
    NSUInteger _repeatOptions;
    BOOL _isEnabled;
    BOOL _isSnoozed;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsEnabled;
-(BOOL)getIsFiring;
-(BOOL)getIsSnoozed;
-(BOOL)isDirty;
-(NSUInteger)getHour;
-(NSUInteger)getMinute;
-(NSUInteger)getRepeatOptions;
-(NSUInteger)getType;
-(id)getAlarmID;
-(id)getAlarmURL;
-(id)getDismissedDate;
-(id)getFiredDate;
-(id)getLastModifiedDate;
-(id)getTitle;
-(id)initWithBase:(id)arg0 ;
-(void)setAlarmID:(id)arg0 ;
-(void)setAlarmURL:(id)arg0 ;
-(void)setDismissedDate:(id)arg0 ;
-(void)setFiredDate:(id)arg0 ;
-(void)setHour:(NSUInteger)arg0 ;
-(void)setIsEnabled:(BOOL)arg0 ;
-(void)setIsFiring:(BOOL)arg0 ;
-(void)setIsSnoozed:(BOOL)arg0 ;
-(void)setLastModifiedDate:(id)arg0 ;
-(void)setMinute:(NSUInteger)arg0 ;
-(void)setRepeatOptions:(NSUInteger)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setType:(NSUInteger)arg0 ;


@end


#endif