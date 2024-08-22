// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONALARMMETADATA_H
#define WBSWEBEXTENSIONALARMMETADATA_H

@class NSMutableDictionary, NSDictionary, WBSDispatchSourceTimer;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionAlarmMetadata : NSObject {
    NSMutableDictionary *_dictionary;
    CGFloat _initialTimerScheduleSeconds;
    BOOL _repeats;
}


@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) WBSDispatchSourceTimer *timer; // ivar: _timer


-(id)initWithName:(id)arg0 scheduledTime:(id)arg1 periodInMinutes:(id)arg2 initialTimerScheduleSeconds:(CGFloat)arg3 ;
-(void)_scheduleWithHandler:(id)arg0 ;


@end


#endif