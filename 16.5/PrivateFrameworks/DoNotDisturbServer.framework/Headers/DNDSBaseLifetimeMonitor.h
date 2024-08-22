// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSBASELIFETIMEMONITOR_H
#define DNDSBASELIFETIMEMONITOR_H

@class NSArray, NSString;
@protocol DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSBaseLifetimeMonitor : NSObject <DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor>



@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // ivar: _activeLifetimeAssertionUUIDs
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


+(Class)lifetimeClass;
-(id)init;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(id)updateForModeAssertions:(id)arg0 date:(id)arg1 ;
-(void)dealloc;
-(void)refreshMonitorForDate:(id)arg0 ;
-(void)refreshMonitorFromQueueForDate:(id)arg0 ;


@end


#endif