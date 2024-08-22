// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSASSET_H
#define TTSASSET_H

@class NSNumber, NSDictionary, NSBundle, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "TTSAssetSource.h"
#import "TTSAssetType.h"
#import "TTSAssetQuality.h"
#import "TTSAssetTechnology.h"

@interface TTSAsset : NSObject

@property (readonly, nonatomic) NSNumber *age; // ivar: _age
@property (readonly, nonatomic) TTSAssetSource *assetSource; // ivar: _assetSource
@property (readonly, nonatomic) TTSAssetType *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSNumber *diskSize; // ivar: _diskSize
@property (nonatomic, readonly) BOOL downloading;
@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage
@property (nonatomic, readonly) BOOL purgeable;
@property (readonly, nonatomic) TTSAssetQuality *quality; // ivar: _quality
@property (readonly, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (readonly, nonatomic) TTSAssetTechnology *technology; // ivar: _technology
@property (readonly, nonatomic) NSString *versionDescription; // ivar: _versionDescription
@property (readonly, nonatomic) NSInteger versionNumber; // ivar: _versionNumber


+(BOOL)_hasTrialEntitlements;
+(BOOL)handleProxyEvent:(id)arg0 reply:(id)arg1 connection:(id)arg2 ;
+(BOOL)setServer:(id)arg0 forType:(id)arg1 ;
+(BOOL)setServer:(id)arg0 forType:(id)arg1 source:(id)arg2 ;
+(id)NewAssetNotification;
+(id)assistantVoiceMaps;
+(id)bestAssetOfTypes:(id)arg0 matching:(id)arg1 ;
+(id)describeServer:(id)arg0 forType:(id)arg1 ;
+(id)describeServer:(id)arg0 source:(id)arg1 ;
+(id)getServerForType:(id)arg0 ;
+(id)getServerForType:(id)arg0 source:(id)arg1 ;
+(id)listAssetsOfTypes:(id)arg0 matching:(id)arg1 ;
+(struct _NSRange )_gryphonVoiceCompatibility;
+(void)_postNewAssetNotification;
+(void)waitForCatalogUpdates;
-(BOOL)isNewer:(id)arg0 ;
-(BOOL)isOlder:(id)arg0 ;
-(id)init;
-(id)legacyAssetWithBundle:(id)arg0 ;
-(id)relatedAssetsWithOnlyAvailable:(BOOL)arg0 ;
-(void)cancelDownloadingThen:(id)arg0 ;
// -(void)downloadWithReservation:(id)arg0 useBattery:(BOOL)arg1 progress:(id)arg2 then:(unk)arg3  ;
-(void)purge;
-(void)purgeImmediately:(BOOL)arg0 ;
-(void)purgeWithImmediately:(BOOL)arg0 ;


@end


#endif