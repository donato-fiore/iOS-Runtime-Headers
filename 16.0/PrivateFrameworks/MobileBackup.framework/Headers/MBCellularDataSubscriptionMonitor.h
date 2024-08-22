// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBCELLULARDATASUBSCRIPTIONMONITOR_H
#define MBCELLULARDATASUBSCRIPTIONMONITOR_H

@class NSString, CoreTelephonyClient;
@protocol CoreTelephonyClientDataDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MBCellularDataSubscriptionMonitor : NSObject <CoreTelephonyClientDataDelegate>

 {
    BOOL _backupOnCellularSupportChanged;
}


@property NSUInteger backupOnCellularSupport; // ivar: _backupOnCellularSupport
@property (copy, nonatomic) id *backupOnCellularSupportHandler; // ivar: _backupOnCellularSupportHandler
@property int cellularRadioType; // ivar: _cellularRadioType
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delegateTimer; // ivar: _delegateTimer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient
@property (nonatomic) NSUInteger timeout; // ivar: _timeout


-(BOOL)_startDelegateTimerWithTimeout:(NSUInteger)arg0 ;
-(NSUInteger)_backupOnCellularSupportWithError:(*id)arg0 ;
-(id)initWithQueue:(id)arg0 timeout:(NSUInteger)arg1 ;
-(id)initWithTimeout:(NSUInteger)arg0 ;
-(void)_cancelDelegateTimer;
-(void)_refreshBackupOnCellularSupportWithTimeout:(NSUInteger)arg0 ;
-(void)cancel;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dataSettingsChanged:(id)arg0 ;
-(void)internetDataStatus:(id)arg0 ;
-(void)start;


@end


#endif