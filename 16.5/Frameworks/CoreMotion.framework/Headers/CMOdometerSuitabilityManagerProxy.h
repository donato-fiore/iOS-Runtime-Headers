// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMODOMETERSUITABILITYMANAGERPROXY_H
#define CMODOMETERSUITABILITYMANAGERPROXY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMOdometerSuitabilityManager.h"

@interface CMOdometerSuitabilityManagerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    *void fLocationdConnection;
    id *fHandler;
}


@property (nonatomic) CMOdometerSuitabilityManager *odometerSuitabilityManager; // ivar: _odometerSuitabilityManager
@property CGFloat startDate; // ivar: _startDate
@property CGFloat suitableForRunning; // ivar: _suitableForRunning
@property CGFloat suitableForWalking; // ivar: _suitableForWalking


-(id)initWithOdometerSuitability:(id)arg0 ;
-(void)_startDaemonConnection;
-(void)_startOdometerSuitabilityUpdatesWithHandler:(id)arg0 ;
-(void)_stopOdometerSuitabilityUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif