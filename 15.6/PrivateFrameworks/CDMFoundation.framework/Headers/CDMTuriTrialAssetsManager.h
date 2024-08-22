// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMTURITRIALASSETSMANAGER_H
#define CDMTURITRIALASSETSMANAGER_H

@class TRIClient, NSArray, NSDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface CDMTuriTrialAssetsManager : NSObject {
    TRIClient *_nlTRIClient;
    NSArray *_namespaces;
    NSDictionary *_namespaceToFactors;
    NSDictionary *_factorToNamespace;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(BOOL)areFactorsValid:(id)arg0 ;
-(BOOL)isTrialAssetValid:(id)arg0 ;
-(BOOL)isTrialAssetValidForSystemLocale:(id)arg0 ;
-(BOOL)promoteAssetsForFactors:(id)arg0 withFailedFactors:(id)arg1 ;
-(BOOL)promoteAssetsForNamespaces:(id)arg0 ;
-(BOOL)registerForFactors:(id)arg0 withAssetsDelegate:(id)arg1 ;
-(BOOL)setAssetsProvisionalForFactors:(id)arg0 ;
-(BOOL)setAssetsProvisionalForNamespaces:(id)arg0 ;
-(id)convertToFactorToNamespace:(id)arg0 ;
-(id)filterFactors:(id)arg0 forNamespace:(id)arg1 ;
-(id)filterFactors:(id)arg0 forNamespaces:(id)arg1 ;
-(id)generateNamespaceToFactorsMapping:(id)arg0 ;
-(id)getAbsolutePathForServiceTrialFactor:(id)arg0 ;
-(id)getDirectoryFactorPath:(id)arg0 inNamespace:(id)arg1 ;
-(id)getFactorNamesInNamespace:(id)arg0 ;
-(id)getNamespacesForFactors:(id)arg0 ;
-(id)initWithLocale:(id)arg0 forNamespace:(id)arg1 ;
-(id)initWithLocale:(id)arg0 forNamespaces:(id)arg1 ;
-(void)fetchCompatibilityVersion;
-(void)fetchCompatibilityVersionForNamespace:(id)arg0 ;
-(void)fetchRolloutStatus;
-(void)fetchRolloutStatusForNamespace:(id)arg0 ;
-(void)initTRIClient;
-(void)refreshTRIClient;
-(void)registerForFactors:(id)arg0 inNamespace:(id)arg1 withAssetsDelegate:(id)arg2 ;


@end


#endif