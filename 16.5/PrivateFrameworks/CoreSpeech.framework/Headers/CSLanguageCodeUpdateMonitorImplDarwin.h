// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLANGUAGECODEUPDATEMONITORIMPLDARWIN_H
#define CSLANGUAGECODEUPDATEMONITORIMPLDARWIN_H

@class NSString;


#import "CSLanguageCodeUpdateMonitor.h"

@interface CSLanguageCodeUpdateMonitorImplDarwin : CSLanguageCodeUpdateMonitor {
    NSString *_currentLanguageCode;
}




-(id)init;
-(void)_didReceiveLanguageCodeUpdate:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 withLanguageCode:(id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)notifySiriLanguageCodeChanged:(id)arg0 ;


@end


#endif