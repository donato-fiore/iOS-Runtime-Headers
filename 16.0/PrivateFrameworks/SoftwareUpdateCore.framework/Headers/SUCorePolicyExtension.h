// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOLICYEXTENSION_H
#define SUCOREPOLICYEXTENSION_H

@protocol NSSecureCoding, SUCorePolicyExtensionProtocol;

#import <Foundation/Foundation.h>


@interface SUCorePolicyExtension : NSObject <NSSecureCoding, SUCorePolicyExtensionProtocol>





+(BOOL)supportsSecureCoding;
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