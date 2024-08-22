// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANION3RDPARTYAPP_H
#define NTKCOMPANION3RDPARTYAPP_H

@class NSString, NRDevice, NSArray, NSURL;


#import "NTKCompanionApp.h"

@interface NTKCompanion3rdPartyApp : NTKCompanionApp

@property (retain, nonatomic) NSString *complicationClientIdentifier; // ivar: _complicationClientIdentifier
@property (retain, nonatomic) NRDevice *device; // ivar: _device
@property (nonatomic) BOOL galleryBundlesLoaded; // ivar: _galleryBundlesLoaded
@property (nonatomic, getter=isInstalled) BOOL installed; // ivar: _installed
@property (retain, nonatomic) NSArray *supportedFamilies; // ivar: _supportedFamilies
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (retain, nonatomic) NSURL *urlToComplicationBundle; // ivar: _urlToComplicationBundle
@property (retain, nonatomic) NSURL *urlToWatchKitBundle; // ivar: _urlToWatchKitBundle


+(BOOL)_isValidApplication:(id)arg0 ;
+(BOOL)_isValidComplicationsInformation:(id)arg0 ;
+(id)_URLOfFirstItemWithExtension:(id)arg0 inDirectory:(id)arg1 ;
+(id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg0 ;
+(id)companion3rdPartyRemoteApp:(id)arg0 device:(id)arg1 ;
-(BOOL)_installStateFromAppConduitInstallState:(NSInteger)arg0 ;
-(BOOL)applicationHasBeenUpdated:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDevice:(id)arg0 remoteApplication:(id)arg1 galleryBundles:(id)arg2 watchKitBundle:(id)arg3 ;
-(id)_initWithWatchAppId:(id)arg0 containerAppId:(id)arg1 complicationClientId:(id)arg2 ;
-(id)appRegistrationDate;
-(id)complication;
-(id)localizedNameForRemoteApp:(id)arg0 ;
-(void)install;


@end


#endif