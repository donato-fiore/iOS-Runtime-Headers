// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREPOLICYEXTENSIONCOMPANIONCOMPATIBILITY_H
#define SUCOREPOLICYEXTENSIONCOMPANIONCOMPATIBILITY_H

@class NSNumber;
@protocol SUCorePolicyExtensionProtocol;


#import "SUCorePolicyExtension.h"

@interface SUCorePolicyExtensionCompanionCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>



@property (retain, nonatomic) NSNumber *maxCompatibility; // ivar: _maxCompatibility
@property (retain, nonatomic) NSNumber *minCompatibility; // ivar: _minCompatibility


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
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