// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKBACKLIGHTMONITOR_H
#define _DKBACKLIGHTMONITOR_H

@class DKMonitor, BMBacklightStream;



@interface _DKBacklightMonitor : DKMonitor {
    int notifyToken;
    BMBacklightStream *_backlightStream;
}




+(BOOL)indicatesScreenOnWithNotificationState:(id)arg0 ;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg0 ;
+(id)entitlements;
+(id)eventStream;
+(void)setIsBacklit:(BOOL)arg0 ;
-(id)init;
-(void)deactivate;
-(void)dealloc;
-(void)obtainCurrentValue;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif