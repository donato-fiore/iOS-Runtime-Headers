// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREPOLICYEXTENSIONSPLATUPDATE_H
#define SUCOREPOLICYEXTENSIONSPLATUPDATE_H

@class NSString;
@protocol SUCorePolicyExtensionProtocol;


#import "SUCorePolicyExtension.h"

@interface SUCorePolicyExtensionSplatUpdate : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>



@property (nonatomic) BOOL allowSameRestoreVersion; // ivar: _allowSameRestoreVersion
@property (retain, nonatomic) NSString *installedBaseOSBuildVersion; // ivar: _installedBaseOSBuildVersion
@property (retain, nonatomic) NSString *installedBaseOSProductVersion; // ivar: _installedBaseOSProductVersion
@property (retain, nonatomic) NSString *installedBaseOSReleaseType; // ivar: _installedBaseOSReleaseType
@property (retain, nonatomic) NSString *installedBaseOSRestoreVersion; // ivar: _installedBaseOSRestoreVersion
@property (retain, nonatomic) NSString *installedSplatBuildVersion; // ivar: _installedSplatBuildVersion
@property (retain, nonatomic) NSString *installedSplatProductVersion; // ivar: _installedSplatProductVersion
@property (retain, nonatomic) NSString *installedSplatProductVersionExtra; // ivar: _installedSplatProductVersionExtra
@property (retain, nonatomic) NSString *installedSplatReleaseType; // ivar: _installedSplatReleaseType
@property (retain, nonatomic) NSString *installedSplatRestoreVersion; // ivar: _installedSplatRestoreVersion
@property (retain, nonatomic) NSString *requestedSplatRestoreVersion; // ivar: _requestedSplatRestoreVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSplatPolicy;
-(id)_stringRemovingParenthesis:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extensionName;
-(id)filterDocumentationAssetArray:(id)arg0 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extendDocumentationMAAssetQuery:(id)arg0 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg0 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg0 descriptor:(id)arg1 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg0 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg0 ;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg0 ;


@end


#endif