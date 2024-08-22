// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRXDEVICEQUERY_H
#define _TVRXDEVICEQUERY_H

@class NSMutableDictionary, NSString, NSSet;
@protocol _TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate, _TVRXDeviceQueryDelegate;

#import <Foundation/Foundation.h>

#import "_TVRCMatchPointDeviceQuery.h"
#import "_TVRCMediaRemoteDeviceQuery.h"
#import "_TVRCRapportDeviceQuery.h"
#import "_TVRCRMSDeviceQuery.h"

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate>



@property (retain, nonatomic) NSMutableDictionary *aggregateDevices; // ivar: _aggregateDevices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRXDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *devices;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) _TVRCMatchPointDeviceQuery *matchPointQuery; // ivar: _matchPointQuery
@property (retain, nonatomic) _TVRCMediaRemoteDeviceQuery *mediaRemoteQuery; // ivar: _mediaRemoteQuery
@property (retain, nonatomic) _TVRCRapportDeviceQuery *rapportDeviceQuery; // ivar: _rapportDeviceQuery
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
-(void)mediaRemoteDeviceQuery:(id)arg0 addedTelevision:(id)arg1 ;
-(void)mediaRemoteDeviceQuery:(id)arg0 removedTelevision:(id)arg1 ;
-(void)rapportDeviceQuery:(id)arg0 addedDevice:(id)arg1 ;
-(void)rapportDeviceQuery:(id)arg0 removedDevice:(id)arg1 ;
-(void)rmsDeviceQuery:(id)arg0 addedDevice:(id)arg1 ;
-(void)rmsDeviceQuery:(id)arg0 removedDevice:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif