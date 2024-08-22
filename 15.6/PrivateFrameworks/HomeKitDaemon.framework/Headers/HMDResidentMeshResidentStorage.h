// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTMESHRESIDENTSTORAGE_H
#define HMDRESIDENTMESHRESIDENTSTORAGE_H

@class HMFObject, NSMutableDictionary, NSMutableSet, NSString, NSSet, NSDictionary, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMDResidentMesh.h"
#import "HMDDevice.h"

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate>



@property (retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // ivar: _accessoryListWithLinkQuality
@property (retain, nonatomic) NSMutableSet *accessoryUUIDs; // ivar: _accessoryUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *lastSentAccessoryUUIDs; // ivar: _lastSentAccessoryUUIDs
@property (retain, nonatomic) NSDictionary *lastSentMetrics; // ivar: _lastSentMetrics
@property (retain, nonatomic) NSMutableDictionary *metrics; // ivar: _metrics
@property (weak, nonatomic) HMDResidentMesh *owner; // ivar: _owner
@property (weak, nonatomic) HMDDevice *resident; // ivar: _resident
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *transmitTimer; // ivar: _transmitTimer


-(BOOL)_addAccessoryWithLinkQuality:(id)arg0 toList:(id)arg1 completion:(id)arg2 ;
-(id)_buildPayload;
-(id)initWithResident:(id)arg0 owner:(id)arg1 ;
-(void)_addAccessory:(id)arg0 activateTimer:(BOOL)arg1 ;
-(void)_removeAccessory:(id)arg0 activateTimer:(BOOL)arg1 ;
-(void)_transmitAfter:(CGFloat)arg0 ;
-(void)_transmitStatus:(BOOL)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif