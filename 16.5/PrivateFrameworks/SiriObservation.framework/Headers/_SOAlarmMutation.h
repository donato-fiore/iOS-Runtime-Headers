// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SOALARMMUTATION_H
#define _SOALARMMUTATION_H

@class NSUUID, NSURL, NSString;
@protocol SOAlarmMutating;

#import <Foundation/Foundation.h>

#import "SOAlarm.h"

@interface _SOAlarmMutation : NSObject <SOAlarmMutating>

 {
    SOAlarm *_base;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    NSUInteger _hour;
    NSUInteger _minute;
    NSUInteger _repeatSchedule;
    BOOL _isEnabled;
    BOOL _isFiring;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsEnabled;
-(BOOL)getIsFiring;
-(BOOL)isDirty;
-(NSUInteger)getHour;
-(NSUInteger)getMinute;
-(NSUInteger)getRepeatSchedule;
-(id)getAlarmID;
-(id)getAlarmURL;
-(id)getTitle;
-(id)initWithBase:(id)arg0 ;
-(void)setAlarmID:(id)arg0 ;
-(void)setAlarmURL:(id)arg0 ;
-(void)setHour:(NSUInteger)arg0 ;
-(void)setIsEnabled:(BOOL)arg0 ;
-(void)setIsFiring:(BOOL)arg0 ;
-(void)setMinute:(NSUInteger)arg0 ;
-(void)setRepeatSchedule:(NSUInteger)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif