// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUPDATEALARMINTENTHANDLER_H
#define MTUPDATEALARMINTENTHANDLER_H

@class NSString;
@protocol MTUpdateAlarmIntentHandling;


#import "MTAlarmIntentHandler.h"

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_alarmUserActivityWithIntent:(id)arg0 ;
-(void)confirmMTUpdateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)confirmUpdateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleMTUpdateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleUpdateAlarm:(id)arg0 completion:(id)arg1 ;


@end


#endif