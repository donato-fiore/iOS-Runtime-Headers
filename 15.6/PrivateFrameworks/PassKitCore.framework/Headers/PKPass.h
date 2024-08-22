// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASS_H
#define PKPASS_H

@class NSString, NSURL, NSSet, NSArray, NSData, NSDate, UIImage, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding;


#import "PKObject.h"
#import "PKLiveRenderedShaderSet.h"
#import "PKImage.h"
#import "PKBarcode.h"
#import "PKPassBarcodeSettings.h"
#import "PKPassDisplayProfile.h"
#import "PKPassFrontFaceImageSet.h"
#import "PKPassLiveRenderedArmedStateImageSet.h"
#import "PKPassLiveRenderedImageSet.h"
#import "PKNFCPayload.h"
#import "PKPaymentPass.h"
#import "PKPassPersonalization.h"
#import "PKSecureElementPass.h"

@interface PKPass : PKObject <NSCopying, NSSecureCoding>

 {
    PKLiveRenderedShaderSet *_liveRenderedShaderSet;
}


@property (readonly, nonatomic) NSString *airlineCode;
@property (readonly, nonatomic) PKImage *altImage;
@property (readonly, nonatomic) NSURL *appLaunchURL;
@property (copy, nonatomic) NSSet *associatedPassTypeIdentifiers; // ivar: _associatedPassTypeIdentifiers
@property (copy, nonatomic) NSString *authenticationToken;
@property (readonly, nonatomic) NSArray *backFieldBuckets;
@property (readonly, nonatomic) PKBarcode *barcode;
@property (readonly, nonatomic) PKPassBarcodeSettings *barcodeSettings;
@property (readonly, nonatomic) NSString *businessChatIdentifier;
@property (readonly, nonatomic) PKImage *cardHolderPicture;
@property (copy, nonatomic) NSString *cardholderInfoSectionTitle; // ivar: _cardholderInfoSectionTitle
@property (retain, nonatomic) NSData *cloudKitMetadata; // ivar: _cloudKitMetadata
@property (retain, nonatomic) NSData *cloudKitSecureMetadata; // ivar: _cloudKitSecureMetadata
@property (readonly, nonatomic) CGRect cobrandLogoRect;
@property (readonly, nonatomic) PKImage *compactBankLogoDarkImage;
@property (readonly, nonatomic) PKImage *compactBankLogoLightImage;
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) PKPassDisplayProfile *displayProfile;
@property (copy, nonatomic) NSSet *embeddedBeacons; // ivar: _embeddedBeacons
@property (copy, nonatomic) NSSet *embeddedLocations;
@property (copy, nonatomic) NSArray *embeddedLocationsArray; // ivar: _embeddedLocations
@property (readonly, nonatomic) NSInteger eventType;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSString *flightCode;
@property (readonly, nonatomic) NSUInteger flightNumber;
@property (readonly, nonatomic) PKImage *footerImage;
@property (readonly, nonatomic) PKImage *frontFaceImage;
@property (readonly, nonatomic) PKPassFrontFaceImageSet *frontFaceImageSet;
@property (readonly, nonatomic) PKImage *frontFaceShadowImage;
@property (readonly, nonatomic) NSArray *frontFieldBuckets;
@property (copy, nonatomic) NSString *groupingID; // ivar: _groupingID
@property (readonly, nonatomic) BOOL hasFlightDetails;
@property (nonatomic) BOOL hasStoredValue; // ivar: _hasStoredValue
@property (nonatomic) NSUInteger homeKeyLiveRenderType; // ivar: _homeKeyLiveRenderType
@property (readonly, copy, nonatomic) UIImage *icon;
@property (readonly, nonatomic) PKImage *iconImage;
@property (retain, nonatomic) NSDate *ingestedDate; // ivar: _ingestedDate
@property (nonatomic) BOOL isCloudKitArchived; // ivar: _isCloudKitArchived
@property (nonatomic) BOOL isCloudKitSecurelyArchived; // ivar: _isCloudKitSecurelyArchived
@property (readonly, nonatomic) BOOL isPersonalizable;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) NSUInteger liveRenderType; // ivar: _liveRenderType
@property (readonly, nonatomic) PKPassLiveRenderedArmedStateImageSet *liveRenderedArmedStateImageSet;
@property (nonatomic) BOOL liveRenderedBackground; // ivar: _liveRenderedBackground
@property (readonly, nonatomic) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property (readonly, nonatomic) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property (copy, nonatomic) NSURL *localLocationsURL; // ivar: _localLocationsURL
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) CGRect logoRect;
@property (readonly, nonatomic) NSString *logoText;
@property (readonly, nonatomic) NSString *lowercaseLocalizedName;
@property (retain, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (nonatomic) BOOL muteReadyForUseNotification; // ivar: _muteReadyForUseNotification
@property (copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload; // ivar: _nfcPayload
@property (readonly) NSString *notificationCenterTitle;
@property (readonly, nonatomic) PKImage *notificationIconImage;
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, nonatomic) PKImage *partialFrontFaceImage;
@property (readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // ivar: _partialFrontFaceImagePlaceholder
@property (readonly, nonatomic) NSArray *passDetailSections;
@property (copy, nonatomic) NSString *passLibraryMachServiceName; // ivar: _passLibraryMachServiceName
@property (nonatomic) NSUInteger passType; // ivar: _passType
@property (copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPassPersonalization *personalization;
@property (readonly, nonatomic) PKImage *personalizationLogoImage;
@property (readonly, nonatomic) NSString *pluralLocalizedName;
@property (copy, nonatomic) NSString *provisioningCredentialHash; // ivar: _provisioningCredentialHash
@property (readonly, nonatomic) PKImage *rawIcon;
@property (copy, nonatomic) NSDate *relevantDate; // ivar: _relevantDate
@property (nonatomic, getter=isRemotePass) BOOL remotePass; // ivar: _remotePass
@property (nonatomic, getter=isRevoked) BOOL revoked; // ivar: _revoked
@property (readonly, nonatomic) PKSecureElementPass *secureElementPass;
@property (copy, nonatomic) NSNumber *sequenceCounter; // ivar: _sequenceCounter
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) NSInteger sharingMethod; // ivar: _sharingMethod
@property (copy, nonatomic) NSString *sharingText; // ivar: _sharingText
@property (copy, nonatomic) NSURL *sharingURL; // ivar: _sharingURL
@property (readonly, nonatomic) BOOL silenceRequested;
@property (readonly, nonatomic) NSArray *storeIdentifiers;
@property (readonly, nonatomic) CGRect stripRect;
@property (readonly, nonatomic) NSInteger style;
@property (nonatomic) BOOL supportsCategoryVisualization; // ivar: _supportsCategoryVisualization
@property (readonly, nonatomic) NSArray *systemAppBundleIdentifiers;
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) CGRect thumbnailRect;
@property (readonly, nonatomic) NSInteger transitType;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (nonatomic, getter=isVoided) BOOL voided; // ivar: _voided
@property (copy, nonatomic) NSURL *webLocationsURL; // ivar: _webLocationsURL
@property (copy, nonatomic) NSURL *webServiceURL;


+(BOOL)isValidObjectWithFileDataAccessor:(id)arg0 validationOptions:(NSUInteger)arg1 warnings:(*id)arg2 error:(*id)arg3 signingDate:(*id)arg4 passDictionary:(id)arg5 ;
+(BOOL)supportsSecureCoding;
+(Class)classForDictionary:(id)arg0 bundle:(id)arg1 ;
+(Class)classForPassType:(NSUInteger)arg0 ;
+(Class)resolvingClass;
+(NSUInteger)defaultSettings;
+(id)dataTypeIdentifier;
+(id)fetchSigningDateForObjectWithFileDataAccessor:(id)arg0 passDictionary:(id)arg1 ;
+(id)recordNameForUniqueID:(id)arg0 ;
+(id)recordNamePrefix;
+(id)uniqueIDFromRecordName:(id)arg0 ;
-(BOOL)availableForAutomaticPresentationUsingBeaconContext;
-(BOOL)availableForAutomaticPresentationUsingVASContext;
-(BOOL)hasLocationRelevancyInfo;
-(BOOL)hasTimeOrLocationRelevancyInfo;
-(BOOL)hasValidNFCPayload;
-(BOOL)isEqualToPassIncludingMetadata:(id)arg0 ;
-(BOOL)isExpired;
-(BOOL)isExpiredBasedOnSigningDate;
-(BOOL)isRelevantDateOld;
-(BOOL)isUpdatable;
-(BOOL)linksToApp;
-(BOOL)supportsSharing;
-(BOOL)supportsSyncing;
-(NSUInteger)itemType;
-(id)_changeMessageForFieldKey:(id)arg0 ;
-(id)_localizationKeyForMultipleDiff;
-(id)allSemantics;
-(id)backgroundImage;
-(id)balanceFields;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyAmountForSemanticKey:(id)arg0 ;
-(id)dateForSemanticKey:(id)arg0 ;
-(id)dictionariesForSemanticKey:(id)arg0 ;
-(id)diff:(id)arg0 ;
-(id)fieldForKey:(id)arg0 ;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg0 ;
-(id)localizedValueForFieldKey:(id)arg0 ;
-(id)locationForSemanticKey:(id)arg0 ;
-(id)logoImage;
-(id)numberForSemanticKey:(id)arg0 ;
-(id)passLocalizedStringForKey:(id)arg0 ;
-(id)personNameComponentsForSemanticKey:(id)arg0 ;
-(id)primaryFields;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(id)semantics;
-(id)stringForSemanticKey:(id)arg0 ;
-(id)stringsForSemanticKey:(id)arg0 ;
-(id)stripImage;
-(id)systemFieldsData;
-(id)thumbnailImage;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)downloadRemoteAssetsForSEIDS:(id)arg0 completion:(id)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadFlightsWithCompletionHandler:(id)arg0 ;


@end


#endif