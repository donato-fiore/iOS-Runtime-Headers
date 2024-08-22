// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERDATACOLLECTOR_H
#define CSVOICETRIGGERDATACOLLECTOR_H

@class NSString, NSDate, NSArray, NSMutableArray;
@protocol CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastVTDisableDate; // ivar: _lastVTDisableDate
@property (retain, nonatomic) NSDate *lastVTEnableDate; // ivar: _lastVTEnableDate
@property (retain, nonatomic) NSArray *privacyApprovedFields; // ivar: _privacyApprovedFields
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *vteiList; // ivar: _vteiList


+(id)sharedInstance;
-(id)_filteredVTEIArray;
-(id)fetchVoiceTriggerHeartBeatMetrics;
-(id)init;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)_createAndSubmitRejectLoggingDictWithSource:(id)arg0 withPHSAcceptInfo:(id)arg1 ;
-(void)_submitToggleReport;
-(void)addVTAcceptEntryAndSubmit:(id)arg0 ;
-(void)addVTRejectEntry:(id)arg0 truncateData:(BOOL)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;


@end


#endif