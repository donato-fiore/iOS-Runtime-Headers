// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPBLESTATEMONITOR_H
#define SPBLESTATEMONITOR_H

@class CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, SPBLEStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface SPBLEStateMonitor : NSObject <CBCentralManagerDelegate>



@property (nonatomic) NSUInteger bleState; // ivar: _bleState
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPBLEStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)notifyDelegate:(NSUInteger)arg0 ;
-(void)startMonitoring;


@end


#endif