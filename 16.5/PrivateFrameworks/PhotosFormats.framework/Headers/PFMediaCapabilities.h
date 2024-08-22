// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMEDIACAPABILITIES_H
#define PFMEDIACAPABILITIES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation; // ivar: _capabilitiesInformation
@property (retain) NSDictionary *outOfBandHints; // ivar: _outOfBandHints


+(BOOL)currentDeviceIsEligibleForHDRPlayback;
+(BOOL)setNewFormatsConfiguration:(NSInteger)arg0 fromSource:(NSInteger)arg1 ;
+(BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)arg0 ;
+(BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)arg0 ;
+(NSInteger)newFormatsConfiguration;
+(id)capabilitiesForCurrentDevice;
+(id)capabilitiesForCurrentDeviceWithOptions:(id)arg0 ;
+(id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg0 ;
+(id)legacyCapabilities;
+(id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+(id)recordSlomoConfigurationWithValidValues:(id)arg0 ;
+(id)recordVideoConfigurationWithValidValues:(id)arg0 ;
+(id)stringForSupport:(NSInteger)arg0 ;
+(id)testCapabilitiesNotSupportingHEIF;
+(id)testCapabilitiesNotSupportingHEVC;
+(id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+(unsigned int)currentDeviceHEVCCapabilities;
+(void)setRecordSlomoConfiguration:(id)arg0 ;
+(void)setRecordVideoConfiguration:(id)arg0 ;
-(BOOL)supportsHDR;
-(BOOL)supportsTranscodeChoice;
-(NSInteger)decodingSupportForAVAsset:(id)arg0 ;
-(NSInteger)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(NSInteger)supportForAdjustmentBaseResources;
-(NSInteger)supportForAssetBundleVersion:(id)arg0 ;
-(NSInteger)supportForContainerTypeIdentifier:(id)arg0 ;
-(NSInteger)supportForLivePhotoVersion:(id)arg0 ;
-(NSInteger)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(NSInteger)arg0 selector:(SEL)arg1 ;
-(NSInteger)supportValueByApplyingUserDefaultsPeerOverrideToValue:(NSInteger)arg0 selector:(SEL)arg1 ;
-(NSInteger)userDefaultsPeerAssetBundleSupportOverrideValue;
-(NSInteger)userDefaultsPeerOverrideValue;
-(id)description;
-(id)initWithOpaqueRepresentation:(id)arg0 ;
-(id)opaqueRepresentation;


@end


#endif