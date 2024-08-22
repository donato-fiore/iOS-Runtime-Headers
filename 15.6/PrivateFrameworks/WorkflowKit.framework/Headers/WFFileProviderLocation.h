// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILEPROVIDERLOCATION_H
#define WFFILEPROVIDERLOCATION_H

@class NSString;


#import "WFFileLocation.h"

@interface WFFileProviderLocation : WFFileLocation

@property (readonly, nonatomic) NSString *appContainerBundleIdentifier; // ivar: _appContainerBundleIdentifier
@property (readonly, nonatomic) NSString *crossDeviceItemID; // ivar: _crossDeviceItemID
@property (readonly, nonatomic) NSString *fileProviderDomainID; // ivar: _fileProviderDomainID


+(BOOL)canRepresentURL:(id)arg0 ;
+(BOOL)canRepresentURL:(id)arg0 item:(id)arg1 parentItems:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(Class)supportedClassForURL:(id)arg0 ;
+(id)locationWithSerializedRepresentation:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 item:(id)arg1 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(BOOL)shouldShowUsersDuringDisplay:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileProviderDomainID:(id)arg0 crossDeviceItemID:(id)arg1 appContainerBundleIdentifier:(id)arg2 relativeSubpath:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)resolveCrossDeviceItemIDWithError:(*id)arg0 ;
-(id)resolveLocationFromProviderDomainID;
-(id)resolveLocationWithError:(*id)arg0 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif