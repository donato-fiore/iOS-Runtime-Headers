// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXENTERLOIUPDATESOURCE_H
#define ATXENTERLOIUPDATESOURCE_H

@class NSDate, NSUserDefaults;
@protocol ATXUpdatePredictionsSource, ATXUpdatePredictionsDelegate, ATXLocationManagerProtocol;

#import <Foundation/Foundation.h>


@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource>



@property (weak, nonatomic) NSObject<ATXUpdatePredictionsDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<ATXLocationManagerProtocol> *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSDate *now; // ivar: _now
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)_regionIdentifierForLocationOfInterestType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithLocationManager:(id)arg0 userDefaults:(id)arg1 ;
-(void)_registerNotificationListeners;
-(void)_start;
-(void)dealloc;
-(void)locationManagerDidEnterRegion:(id)arg0 ;
-(void)locationManagerDidExitRegion:(id)arg0 ;
-(void)updateMonitoredRegionsIfNecessaryWithReply:(id)arg0 ;


@end


#endif