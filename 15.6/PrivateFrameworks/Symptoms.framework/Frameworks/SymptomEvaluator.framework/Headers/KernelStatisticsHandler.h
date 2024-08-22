// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KERNELSTATISTICSHANDLER_H
#define KERNELSTATISTICSHANDLER_H

@class NSString, AWDLibnetcoreStatsReport, NWStatisticsManager;
@protocol NWStatisticsManagerDelegate, ConfigurableObjectProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "mbufRecord.h"

@interface KernelStatisticsHandler : NSObject <NWStatisticsManagerDelegate, ConfigurableObjectProtocol>



@property unsigned int coalescedReportPending; // ivar: _coalescedReportPending
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) AWDLibnetcoreStatsReport *kernelStatisticsReport; // ivar: _kernelStatisticsReport
@property (retain) mbufRecord *lastReport; // ivar: _lastReport
@property (retain) NWStatisticsManager *nwStatManager; // ivar: _nwStatManager
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)coalescedReport;
-(void)statisticsManager:(id)arg0 didReceiveDirectSystemInformation:(id)arg1 ;


@end


#endif