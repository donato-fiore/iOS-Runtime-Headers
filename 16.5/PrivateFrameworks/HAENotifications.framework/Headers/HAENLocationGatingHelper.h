// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENLOCATIONGATINGHELPER_H
#define HAENLOCATIONGATINGHELPER_H

@class NSDictionary, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HAENGeoLocation.h"

@interface HAENLocationGatingHelper : NSObject {
    HAENGeoLocation *_geoLocation;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSDictionary *_regionBehavior;
    BOOL _EUVolumeLimitFlagOn;
    NSNumber *_productTypeOverride;
    ? _stats;
}




+(id)sharedInstance;
-(BOOL)_isHAENFeatureMandatory:(id)arg0 dataDisposition:(id)arg1 ;
-(BOOL)_isIPod;
-(BOOL)_regionAndDeviceMandatesFeature:(id)arg0 ;
-(BOOL)_shouldUpdateLocation:(id)arg0 ;
-(BOOL)_validCountryCodeSource:(unsigned int)arg0 ;
-(BOOL)_validDataDisposition:(id)arg0 ;
-(id)_readDeviceDisposition;
-(id)init;
-(int)_getMGProductType;
-(struct ? )getStats;
-(void)_contryConfigurationDidChange:(id)arg0 ;
-(void)_donateSignalToTipsKit:(BOOL)arg0 ;
-(void)_donateSignalToTipsKitOnInitialization;
-(void)_loadRegionPlistFile;
-(void)_logLocationGatingFlags;
-(void)_setFeatureMandatoryFlag:(id)arg0 ;
-(void)_setHEANEnabled:(id)arg0 ;
-(void)_updateImpl;
-(void)_updateLocationGatingFlags;
-(void)_updateSampleTransient:(id)arg0 ;
-(void)_updateStatsWithGeoLocation:(id)arg0 disposition:(id)arg1 andMandatoryFlag:(BOOL)arg2 ;
-(void)dealloc;
-(void)deviceDataDispositionDidChange;
-(void)reloadProductTypeOverride;
-(void)update;


@end


#endif