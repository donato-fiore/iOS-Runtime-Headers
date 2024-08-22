// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATECONCURRENCYLOGEVENTMANAGER_H
#define HMDACCESSORYFIRMWAREUPDATECONCURRENCYLOGEVENTMANAGER_H

@class HMFObject, NSMutableArray, NSMutableDictionary;



@interface HMDAccessoryFirmwareUpdateConcurrencyLogEventManager : HMFObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableArray *currentActivity; // ivar: _currentActivity
@property (retain, nonatomic) NSMutableDictionary *inProgress; // ivar: _inProgress
@property (retain, nonatomic) NSMutableArray *peakActivity; // ivar: _peakActivity


-(NSUInteger)differenceFromCounterWithCategory:(NSUInteger)arg0 ;
-(id)init;
-(void)startApplyWithAccessory:(id)arg0 ;
-(void)startStagingWithAccessory:(id)arg0 ;
-(void)startWithCategory:(NSUInteger)arg0 accessory:(id)arg1 ;
-(void)stopApplyWithAccessory:(id)arg0 ;
-(void)stopStagingWithAccessory:(id)arg0 ;
-(void)stopWithCategory:(NSUInteger)arg0 accessory:(id)arg1 ;
-(void)submitLogEvent;


@end


#endif