// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMTURITRIALASSETSMANAGER_H
#define CDMTURITRIALASSETSMANAGER_H

@class NSArray, NSDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface CDMTuriTrialAssetsManager : NSObject {
    NSArray *_triClientManagers;
    NSArray *_namespaces;
    NSDictionary *_namespaceToTRIClientManager;
    NSDictionary *_namespaceToFactors;
    NSDictionary *_factorToNamespace;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


+(id)convertToFactorToNamespace:(id)arg0 withError:(*id)arg1 ;
+(id)generateNamespaceToTRIClientManagerMapping:(id)arg0 withError:(*id)arg1 ;
+(id)getSiriUnderstandingTRIClientManager;
-(BOOL)areFactorsValid:(id)arg0 ;
-(BOOL)isTrialAssetValid:(id)arg0 forLocale:(id)arg1 ;
-(BOOL)isTrialAssetValidForSystemLocale:(id)arg0 ;
-(BOOL)promoteAssetsForFactors:(id)arg0 withFailedFactors:(id)arg1 ;
-(BOOL)promoteAssetsForNamespaces:(id)arg0 ;
-(BOOL)registerForFactors:(id)arg0 withAssetsDelegate:(id)arg1 ;
-(BOOL)setAssetsProvisionalForFactors:(id)arg0 ;
-(BOOL)setAssetsProvisionalForNamespaces:(id)arg0 ;
-(id)filterFactors:(id)arg0 forNamespace:(id)arg1 ;
-(id)filterFactors:(id)arg0 forNamespaces:(id)arg1 ;
-(id)generateNamespaceToFactorsMapping:(id)arg0 ;
-(id)getFactorNamesInNamespace:(id)arg0 ;
-(id)getNamespacesForFactors:(id)arg0 ;
-(id)getTrialAssetForFactor:(id)arg0 inNamespace:(id)arg1 forLocale:(id)arg2 ;
-(id)getTrialAssetsForTrialFactors:(id)arg0 ;
-(id)getTrialClient:(id)arg0 ;
-(id)initWithLocale:(id)arg0 withTRIClientManagers:(id)arg1 ;
-(void)registerForFactors:(id)arg0 inNamespace:(id)arg1 withAssetsDelegate:(id)arg2 ;
-(void)setupWithError:(*id)arg0 ;


@end


#endif