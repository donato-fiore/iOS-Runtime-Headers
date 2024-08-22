// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIVIABILITYMONITOR_H
#define WIFIVIABILITYMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NetworkAnalyticsStateRelay.h"
#import "CellOutrankHandler.h"

@interface WiFiViabilityMonitor : NSObject {
    unsigned int _prevWiFiViability;
    id *_cellFallbackObserver;
    id *_cellFallbackAdminObserver;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellOutrankHandler *_outrankRelay;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_isCellFallbackAdminDisabled;
-(BOOL)_isCellOutrankStateMachineInOutrank;
-(NSInteger)_currentRNFAdvice;
-(id)getState;
-(id)initWithQueue:(id)arg0 ;
-(unsigned int)currentWiFiViabilityFlags;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)possiblySignificantWiFiChange;


@end


#endif