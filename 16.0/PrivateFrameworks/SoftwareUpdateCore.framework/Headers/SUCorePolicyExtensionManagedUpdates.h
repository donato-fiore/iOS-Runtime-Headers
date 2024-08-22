// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOLICYEXTENSIONMANAGEDUPDATES_H
#define SUCOREPOLICYEXTENSIONMANAGEDUPDATES_H

@class NSString;
@protocol SUCorePolicyExtensionProtocol;


#import "SUCorePolicyExtension.h"

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>



@property (nonatomic) BOOL MDMUseDelayPeriod; // ivar: _MDMUseDelayPeriod
@property (nonatomic) NSInteger delayPeriodSecs; // ivar: _delayPeriodSecs
@property (nonatomic) NSUInteger mdmSoftwareUpdatePath; // ivar: _mdmSoftwareUpdatePath
@property (retain, nonatomic) NSString *requestedPMV; // ivar: _requestedPMV
@property (nonatomic) BOOL supervised; // ivar: _supervised


+(BOOL)supportsSecureCoding;
+(id)nameForMDMSoftwareUpdatePath:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRequestedPMVSupervisedPolicy;
-(BOOL)isSupervisedPolicy;
-(NSInteger)delayPeriodDays;
-(id)_filterAssetArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extensionName;
-(id)filterDocumentationAssetArray:(id)arg0 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mdmPathName;
-(id)requestedProductMarketingVersion;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extendDocumentationMAAssetQuery:(id)arg0 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg0 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg0 descriptor:(id)arg1 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg0 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg0 ;
-(void)extendMSUApplyOptions:(id)arg0 ;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg0 ;


@end


#endif