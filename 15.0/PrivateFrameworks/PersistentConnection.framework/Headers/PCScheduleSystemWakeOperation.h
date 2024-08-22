// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSCHEDULESYSTEMWAKEOPERATION_H
#define PCSCHEDULESYSTEMWAKEOPERATION_H

@class NSOperation, NSDate, NSString;



@interface PCScheduleSystemWakeOperation : NSOperation {
    BOOL _scheduleOrCancel;
    BOOL _userVisible;
    NSDate *_wakeDate;
    CGFloat _acceptableDelay;
    NSString *_serviceIdentifier;
    *void _unqiueIdentifier;
}




-(id)initForScheduledWake:(BOOL)arg0 wakeDate:(id)arg1 acceptableDelay:(CGFloat)arg2 userVisible:(BOOL)arg3 serviceIdentifier:(id)arg4 uniqueIdentifier:(*void)arg5 ;
-(void)main;


@end


#endif