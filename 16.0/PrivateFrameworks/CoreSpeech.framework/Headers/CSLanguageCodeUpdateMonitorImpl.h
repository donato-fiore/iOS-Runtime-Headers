// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLANGUAGECODEUPDATEMONITORIMPL_H
#define CSLANGUAGECODEUPDATEMONITORIMPL_H



#import "CSLanguageCodeUpdateMonitor.h"

@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}




-(id)init;
-(void)_didReceiveLanguageCodeUpdate;
-(void)_notifyObserver:(id)arg0 withLanguageCode:(id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)notifySiriLanguageCodeChanged:(id)arg0 ;


@end


#endif