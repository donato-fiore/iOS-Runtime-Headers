// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTIMEREFERENCEBASEBAND_H
#define PLTIMEREFERENCEBASEBAND_H



#import "PLTimeReferenceDynamic.h"
#import "PLNSNotificationOperatorComposition.h"

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification; // ivar: _basebandTimeNotification
@property BOOL followupCurrentTimeRunning; // ivar: _followupCurrentTimeRunning


-(id)currentTime;
-(id)initWithTimeManager:(id)arg0 entryDefinitionKey:(id)arg1 timeReferenceType:(NSInteger)arg2 ;
-(void)dealloc;
-(void)registerForTimeChangedNotification;
-(void)timeChangedNotificationReceived:(id)arg0 ;


@end


#endif