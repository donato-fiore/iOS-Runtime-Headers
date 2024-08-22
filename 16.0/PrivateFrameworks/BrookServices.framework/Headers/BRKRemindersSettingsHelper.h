// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRKREMINDERSSETTINGSHELPER_H
#define BRKREMINDERSSETTINGSHELPER_H

@class CNContactStore, NSString, CLInUseAssertion, CLLocationManager, RTRoutineManager;
@protocol CLLocationManagerDelegate, BRKRemindersSettingsDelegate;

#import <Foundation/Foundation.h>

#import "BRKSettings.h"

@interface BRKRemindersSettingsHelper : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) BRKSettings *brookSettings; // ivar: _brookSettings
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) NSInteger contactStoreAuthorizationStatus; // ivar: _contactStoreAuthorizationStatus
@property (nonatomic, getter=isCoreRoutineAvailable) BOOL coreRoutineAvailable; // ivar: _coreRoutineAvailable
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BRKRemindersSettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion; // ivar: _inUseAssertion
@property (nonatomic, getter=isLocationAuthorizationValid) BOOL locationAuthorizationValid; // ivar: _locationAuthorizationValid
@property (nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // ivar: _locationAvailable
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic, getter=isMeCardAvailable) BOOL meCardAvailable;
@property (readonly, nonatomic, getter=areRemindersAvailable) BOOL remindersAvailable;
@property (retain, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (readonly) Class superclass;


-(id)_handwashingAppBundleLocationManager;
-(id)_handwashingLocationManager;
-(id)initWithDelegate:(id)arg0 settings:(id)arg1 ;
-(id)meContactWithKeysToFetch:(id)arg0 ;
-(id)remindersFooterTextAndLinkString;
-(void)_fetchLocationAuthorizationStatus;
-(void)_fetchLocationAvailableStatus;
-(void)_isCoreRoutineHomeAvailableWithCompletion:(id)arg0 ;
-(void)_updateWithLocationAuthorizationStatus:(int)arg0 manager:(id)arg1 ;
-(void)dealloc;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)requestLocationAuthorizationIfNeeded;
-(void)update;


@end


#endif