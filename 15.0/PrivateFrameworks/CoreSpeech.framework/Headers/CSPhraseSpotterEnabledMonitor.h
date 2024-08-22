// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSPHRASESPOTTERENABLEDMONITOR_H
#define CSPHRASESPOTTERENABLEDMONITOR_H



#import "CSEventMonitor.h"

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isPhraseSpotterEnabled;
}




+(id)sharedInstance;
-(BOOL)_checkPhraseSpotterEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_phraseSpotterEnabledDidChange;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif