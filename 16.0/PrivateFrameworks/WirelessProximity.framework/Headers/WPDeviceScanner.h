// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPDEVICESCANNER_H
#define WPDEVICESCANNER_H

@class NSMutableDictionary, NSMutableArray;
@protocol WPDeviceScannerDelegate;


#import "WPClient.h"

@interface WPDeviceScanner : WPClient

@property (retain, nonatomic) NSMutableDictionary *activeScans; // ivar: _activeScans
@property (nonatomic) BOOL anyScanResultsRequested; // ivar: _anyScanResultsRequested
@property (weak, nonatomic) NSObject<WPDeviceScannerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *liveDevices; // ivar: _liveDevices


-(BOOL)parseType:(unsigned char)arg0 atOffset:(char *)arg1 withSize:(int)arg2 intoDictionary:(id)arg3 ;
-(id)clientAsString;
-(id)description;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addPuckType:(id)arg0 toDictionary:(id)arg1 ;
-(void)anyDiscoveredDevice:(id)arg0 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)parseAirPrint:(char *)arg0 forSize:(int)arg1 intoDictionary:(id)arg2 ;
-(void)parseCompanyData:(char *)arg0 forSize:(int)arg1 intoDictionary:(id)arg2 ;
-(void)postDevice:(id)arg0 ;
-(void)postDevices:(id)arg0 ;
-(void)registerForAnyScanResults:(BOOL)arg0 ;
-(void)registerForDevicesMatching:(id)arg0 options:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)timerFinished:(id)arg0 ;
-(void)unregisterAllDeviceChanges;
-(void)unregisterForDevices:(id)arg0 ;


@end


#endif