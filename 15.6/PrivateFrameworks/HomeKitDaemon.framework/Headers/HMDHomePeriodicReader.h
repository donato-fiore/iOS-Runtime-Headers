// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEPERIODICREADER_H
#define HMDHOMEPERIODICREADER_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDBackgroundTaskAgentTimer.h"
#import "HMDHome.h"

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // ivar: _btaReadTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_characteristicsToRead;
-(id)logIdentifier;
-(void)_checkToIssueRead;
-(void)_issueCharacteristicRequests:(id)arg0 ;
-(void)_startTimer;
-(void)checkToIssueRead;
-(void)configure:(id)arg0 ;
-(void)dealloc;
-(void)handleCharacteristicBasedEventAdded:(id)arg0 ;
-(void)residentUpdated;
-(void)startReadTimer;
-(void)timerFired:(id)arg0 ;


@end


#endif