// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSPEAKERRECOGNITIONASSETMETAUPDATEMONITOR_H
#define CSSPEAKERRECOGNITIONASSETMETAUPDATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(char *)_asssetMetaUpdatedKey;
-(id)init;
-(void)_didReceiveSpeakerRecognitionAssetMetaData;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif