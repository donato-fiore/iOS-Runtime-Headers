// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSPEECHENDPOINTASSETMETAUPDATEMONITOR_H
#define CSSPEECHENDPOINTASSETMETAUPDATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSSpeechEndpointAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(id)init;
-(void)_didReceiveNewSpeechEndpointAssetMetaData;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif