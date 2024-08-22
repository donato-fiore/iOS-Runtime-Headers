// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCONTEXTUALLOCATIONREGISTRATIONMONITOR_H
#define _CDCONTEXTUALLOCATIONREGISTRATIONMONITOR_H

@class NSString, NSMutableDictionary, NSMapTable, NSMutableSet;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDContextualLocationRegistrationMonitor : NSObject <CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableDictionary *effectiveBundleIDRegionInfos; // ivar: _effectiveBundleIDRegionInfos
@property (readonly, nonatomic) NSMapTable *effectiveBundleIDs; // ivar: _effectiveBundleIDs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *managers; // ivar: _managers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableSet *registrations; // ivar: _registrations
@property (readonly) Class superclass;


-(id)init;
-(id)regionInfosForRegistration:(id)arg0 ;
-(void)addRegistration:(id)arg0 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didDetermineState:(NSInteger)arg1 forRegion:(id)arg2 ;
-(void)locationManager:(id)arg0 didStartMonitoringForRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)removeRegistration:(id)arg0 ;


@end


#endif