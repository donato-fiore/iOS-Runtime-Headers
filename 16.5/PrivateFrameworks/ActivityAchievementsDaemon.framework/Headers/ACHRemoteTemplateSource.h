// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHREMOTETEMPLATESOURCE_H
#define ACHREMOTETEMPLATESOURCE_H

@class NSString, NSDictionary;
@protocol ACHTemplateSource, ACHTemplateAssetSource, ACHTemplateAssetSourceDelegate, ACHTemplateSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHBackCompatRemoteAchievementAvailabilityKeyWriter.h"
#import "ACHMobileAssetProvider.h"
#import "ACHRemoteTemplateAvailabilityKeyProvider.h"

@interface ACHRemoteTemplateSource : NSObject <ACHTemplateSource, ACHTemplateAssetSource>

 {
    NSString *_buildVersionOverride;
}


@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate; // ivar: assetSourceDelegate
@property (retain, nonatomic) NSDictionary *assetVersionsByUniqueName; // ivar: _assetVersionsByUniqueName
@property (nonatomic) int availabilityChangeToken; // ivar: _availabilityChangeToken
@property (retain, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriter *backCompatAvailabilityKeyWriter; // ivar: _backCompatAvailabilityKeyWriter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider; // ivar: _mobileAssetProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider; // ivar: _remoteTemplateAvailabilityKeyProvider
@property (retain, nonatomic) NSDictionary *resourceAssetURLsByUniqueName; // ivar: _resourceAssetURLsByUniqueName
@property (readonly, nonatomic) NSInteger runCadence;
@property (retain, nonatomic) NSDictionary *stickerAssetURLsByUniqueName; // ivar: _stickerAssetURLsByUniqueName
@property (readonly) Class superclass;


-(BOOL)sourceShouldRunForDate:(id)arg0 ;
-(NSInteger)mobileAssetVersionForTemplate:(id)arg0 ;
-(id)_resourceAssetURLForTemplate:(id)arg0 ;
-(id)buildVersion;
-(id)initWithMobileAssetProvider:(id)arg0 backCompatWriter:(id)arg1 remoteTemplateAvailabilityKeyProvider:(id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg0 ;
-(id)propertyListBundleURLForTemplate:(id)arg0 ;
-(id)resourceBundleURLForTemplate:(id)arg0 ;
-(id)stickerBundleURLForTemplate:(id)arg0 ;
-(void)_addAssetVersionsByUniqueNameToDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)_addURLsByUniqueNameToDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)_removeURLsByUniqueNameFromDictionary:(id)arg0 fromAsset:(id)arg1 ;
-(void)dealloc;
-(void)setBuildVersionOverride:(id)arg0 ;
-(void)templatesForDate:(id)arg0 completion:(id)arg1 ;


@end


#endif