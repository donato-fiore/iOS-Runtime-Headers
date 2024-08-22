// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFILOCATIONMANAGER_H
#define WIFILOCATIONMANAGER_H

@class CLLocationManager, NSMutableArray, NSString, CLLocation;
@protocol CLLocationManagerDelegate, WiFiLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiLocationManager : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) CLLocationManager *clLocationManager; // ivar: _clLocationManager
@property (retain, nonatomic) NSMutableArray *clientsDataArray; // ivar: _clientsDataArray
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WiFiLocationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property unsigned char isAuthorized; // ivar: _isAuthorized
@property (retain) CLLocation *latestLocation; // ivar: _latestLocation
@property int locationManagerState; // ivar: _locationManagerState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) unsigned char shouldMonitorVisits; // ivar: _shouldMonitorVisits
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *visitClientsDataArray; // ivar: _visitClientsDataArray


+(id)getStringOfCallbackType:(int)arg0 ;
+(id)getStringOfState:(int)arg0 ;
+(id)sharedWiFiLocationManager;
+(unsigned char)isLocationValid:(id)arg0 uptoSeconds:(CGFloat)arg1 isHighAccuracy:(unsigned char)arg2 ;
+(unsigned char)isLocationValid:(id)arg0 uptoSeconds:(CGFloat)arg1 requiredAccuracy:(CGFloat)arg2 ;
+(void)logLocation:(id)arg0 addPrefixString:(id)arg1 ;
-(id)init;
-(void)cancelLocationRequestTimeOut;
-(void)createCoreLocationObjects;
-(void)dealloc;
-(void)destroyCoreLocationObjects;
-(void)invokeClientsCallbackType:(int)arg0 withLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didVisit:(id)arg1 ;
-(void)locationRequestDidTimeOut;
-(void)registerCallbackFunctionPtr:(*unk)arg0 withContext:(*void)arg1 ;
-(void)registerVisitCallbackFunctionPtr:(*unk)arg0 withContext:(*void)arg1 ;
-(void)requestHighAccuracyLocationUpdate;
-(void)requestLeechedAccuracyLocationUpdate;
-(void)requestLowAccuracyLocationUpdate;
-(void)setCLLocationUpdateParams:(id)arg0 ;
-(void)stopQueryingLocation;


@end


#endif