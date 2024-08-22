// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCARPLAYAPPPOLICYEVALUATOR_H
#define CRCARPLAYAPPPOLICYEVALUATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CARSessionStatus.h"
#import "CRCarPlayAppDenylist.h"

@interface CRCarPlayAppPolicyEvaluator : NSObject {
    CARSessionStatus *_sessionStatus;
}


@property (retain, nonatomic) CRCarPlayAppDenylist *denylist; // ivar: _denylist
@property (nonatomic) BOOL evaluatorWantsGeoManagement; // ivar: _evaluatorWantsGeoManagement
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // ivar: _geoQueue
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported; // ivar: _geoSupported
@property (nonatomic) BOOL geo_queue_geoSupported; // ivar: _geo_queue_geoSupported


+(id)_carIntentIdentifiers;
+(id)allIntentIdentifiers;
-(BOOL)_appWithDeclaration:(id)arg0 supportsAllIntents:(id)arg1 ;
-(BOOL)_appWithDeclaration:(id)arg0 supportsAnyIntents:(id)arg1 ;
-(BOOL)_checkIfDeclaration:(id)arg0 supportsIntents:(id)arg1 requireAllIntents:(BOOL)arg2 ;
-(BOOL)_vehicleProtocolsIntersectAppProtocols:(id)arg0 certificateSerial:(id)arg1 ;
-(NSUInteger)_applicationCategoryForAppDeclaration:(id)arg0 policy:(id)arg1 ;
-(id)_vehicleProtocolsForCertificateSerial:(id)arg0 ;
-(id)currentSession;
-(id)effectivePolicyForAppDeclaration:(id)arg0 ;
-(id)effectivePolicyForAppDeclaration:(id)arg0 inVehicleWithCertificateSerial:(id)arg1 ;
-(id)init;
-(void)fetchApplicationBundleIdentifiersForCarIntents:(id)arg0 ;
-(void)setWantsGeoSupported;
-(void)updateGeoSupported;
-(void)updateGeoSupportedWithCompletion:(id)arg0 ;


@end


#endif