// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRXDEVICEQUERY_H
#define TVRXDEVICEQUERY_H

@class NSMutableDictionary, NSString, NSSet;
@protocol TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate, TVRXDeviceQueryDelegate;

#import <Foundation/Foundation.h>

#import "TVRCMatchPointDeviceQuery.h"
#import "TVRCRapportDeviceQuery.h"
#import "_TVRCRMSDeviceQuery.h"

@interface TVRXDeviceQuery : NSObject <TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate>



@property (retain, nonatomic) NSMutableDictionary *aggregateDevices; // ivar: _aggregateDevices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRXDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *devices;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) TVRCMatchPointDeviceQuery *matchPointQuery; // ivar: _matchPointQuery
@property (retain, nonatomic) TVRCRapportDeviceQuery *rapportDeviceQuery; // ivar: _rapportDeviceQuery
@property (retain, nonatomic) _TVRCRMSDeviceQuery *rmsDeviceQuery; // ivar: _rmsDeviceQuery
@property (readonly) Class superclass;


-(id)_findAggregateForIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)init;
-(void)_notifyDelegateDidUpdateDevices;
-(void)_reevaluateAggregates;
-(void)_startSearch;
-(void)_stopSearch;
-(void)matchpointDeviceQuery:(id)arg0 addedService:(id)arg1 ;
-(void)matchpointDeviceQuery:(id)arg0 removedService:(id)arg1 ;
-(void)rapportDeviceQuery:(id)arg0 addedDevice:(id)arg1 ;
-(void)rapportDeviceQuery:(id)arg0 removedDevice:(id)arg1 ;
-(void)rmsDeviceQuery:(id)arg0 addedDevice:(id)arg1 ;
-(void)rmsDeviceQuery:(id)arg0 removedDevice:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif