// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHREMOTETEMPLATESOURCE_H
#define ACHREMOTETEMPLATESOURCE_H

@class NSString, NSDictionary;
@protocol ACHRemoteTemplateAvailabilityListenerDelegate, ACHTemplateSource, ACHTemplateSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHBackCompatRemoteAchievementAvailabilityKeyWriter.h"
#import "ACHMobileAssetProvider.h"
#import "ACHRemoteTemplateAvailabilityKeyProvider.h"
#import "ACHRemoteTemplateAvailabilityListener.h"

@interface ACHRemoteTemplateSource : NSObject <ACHRemoteTemplateAvailabilityListenerDelegate, ACHTemplateSource>

 {
    NSString *_buildVersionOverride;
}


@property (retain, nonatomic) NSDictionary *assetVersionsByUniqueName; // ivar: _assetVersionsByUniqueName
@property (retain, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriter *backCompatAvailabilityKeyWriter; // ivar: _backCompatAvailabilityKeyWriter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider; // ivar: _mobileAssetProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider; // ivar: _remoteTemplateAvailabilityKeyProvider
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityListener *remoteTemplateAvailabilityListener; // ivar: _remoteTemplateAvailabilityListener
@property (retain, nonatomic) NSDictionary *resourceAssetURLsByUniqueName; // ivar: _resourceAssetURLsByUniqueName
@property (readonly, nonatomic) NSInteger runCadence;
@property (retain, nonatomic) NSDictionary *stickerAssetURLsByUniqueName; // ivar: _stickerAssetURLsByUniqueName
@property (readonly) Class superclass;


-(BOOL)sourceShouldRunForDate:(id)arg0 ;
-(NSInteger)mobileAssetVersionForTemplate:(id)arg0 ;
-(id)_resourceAssetURLForTemplate:(id)arg0 ;
-(id)buildVersion;
-(id)initWithMobileAssetProvider:(id)arg0 backCompatWriter:(id)arg1 remoteTemplateAvailabilityKeyProvider:(id)arg2 remoteTemplateAvailabilityListener:(id)arg3 ;
-(id)localizationBundleURLForTemplate:(id)arg0 ;
-(id)propertyListBundleURLForTemplate:(id)arg0 ;
-(id)resourceBundleURLForTemplate:(id)arg0 ;
-(id)stickerBundleURLForTemplate:(id)arg0 ;
-(void)_addAssetVersionsByUniqueNameToDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)_addURLsByUniqueNameToDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)_removeURLsByUniqueNameFromDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)remoteTemplateAvailabilityUpdated;
-(void)setBuildVersionOverride:(id)arg0 ;
-(void)templatesForDate:(id)arg0 completion:(id)arg1 ;


@end


#endif