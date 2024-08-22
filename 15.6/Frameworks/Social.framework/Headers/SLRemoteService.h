// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLREMOTESERVICE_H
#define SLREMOTESERVICE_H

@class UIImage, NSBundle, NSString, NSURL, NSSet;
@protocol NSSecureCoding;


#import "SLService.h"

@interface SLRemoteService : SLService <NSSecureCoding>

 {
    NSInteger _maximumVideoCount;
    UIImage *_activityImage;
    NSBundle *_serviceBundle;
}


@property (retain) NSString *accountTypeIdentifier; // ivar: _accountTypeIdentifier
@property (retain) NSString *activityImageName; // ivar: _activityImageName
@property (retain) NSString *activityViewIconResourceName; // ivar: _activityViewIconResourceName
@property BOOL addDeviceClassToRequest; // ivar: _addDeviceClassToRequest
@property NSInteger authenticationStyle; // ivar: _authenticationStyle
@property (retain) NSString *localizedServiceName; // ivar: _localizedServiceName
@property NSInteger maximumImageCount; // ivar: _maximumImageCount
@property NSInteger maximumImageDataSize; // ivar: _maximumImageDataSize
@property NSInteger maximumURLCount; // ivar: _maximumURLCount
@property (nonatomic) NSInteger maximumVideoCount;
@property NSInteger maximumVideoDataSize; // ivar: _maximumVideoDataSize
@property NSInteger maximumVideoTimeLimit; // ivar: _maximumVideoTimeLimit
@property (readonly) NSBundle *serviceBundle;
@property (retain) NSURL *serviceBundleURL; // ivar: _serviceBundleURL
@property BOOL serviceRegionTargetIsChina; // ivar: _serviceRegionTargetIsChina
@property (retain) NSString *serviceTypeIdentifier; // ivar: _serviceTypeIdentifier
@property (retain) NSSet *supportedImageAssetURLSchemes; // ivar: _supportedImageAssetURLSchemes
@property (retain) NSSet *supportedVideoAssetURLSchemes; // ivar: _supportedVideoAssetURLSchemes


+(BOOL)supportsSecureCoding;
+(id)_cachedServiceWithType:(id)arg0 ;
+(id)_cachedServices;
+(id)remoteServiceForTypeIdentifier:(id)arg0 ;
+(id)remoteServices;
-(BOOL)_isSupportedURL:(id)arg0 withSupportedSchemes:(id)arg1 ;
-(BOOL)_isValidAuthenicationStyleIdentifier:(id)arg0 ;
-(BOOL)infoDictHasRequiredKeys:(id)arg0 ;
-(BOOL)isFirstClassService;
-(BOOL)supportsImageURL:(id)arg0 ;
-(BOOL)supportsVideoURL:(id)arg0 ;
-(NSInteger)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg0 ;
-(id)_activityImageForImageResourceName:(id)arg0 inBundle:(id)arg1 ;
-(id)_encodableStringProperties;
-(id)_requiredInfoDictKeys;
-(id)_setFromArrayWithKey:(id)arg0 inDictionary:(id)arg1 ;
-(id)activityImage;
-(id)activityTitle;
-(id)composeViewController;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceBundle:(id)arg0 socialInfoDictionary:(id)arg1 ;
-(id)integerPropertyKeyMappings;
-(id)serviceType;
-(void)addExtraParameters:(id)arg0 forRequest:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif