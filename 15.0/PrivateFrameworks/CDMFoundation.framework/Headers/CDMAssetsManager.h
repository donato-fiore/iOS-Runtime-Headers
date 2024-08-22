// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMASSETSMANAGER_H
#define CDMASSETSMANAGER_H

@class NSLocale;

#import <Foundation/Foundation.h>

#import "CDMDefaultAssetsManager.h"
#import "CDMTuriTrialAssetsManager.h"

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager *_cdmTuriTrialAssetsManager;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(BOOL)areAssetsAvailableForServices:(id)arg0 ;
-(BOOL)isAssetAvailableForService:(id)arg0 ;
-(BOOL)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)arg0 ;
-(BOOL)promoteAssetsForServices:(id)arg0 withFailedServices:(id)arg1 ;
-(BOOL)registerForServices:(id)arg0 withAssetsDelegate:(id)arg1 ;
-(BOOL)setAssetsProvisionalForServices:(id)arg0 ;
-(id)getAssetPathForService:(id)arg0 ;
-(id)getAssetPathForTrialFactor:(id)arg0 assetFolder:(id)arg1 serviceName:(id)arg2 ;
-(id)getAssetPathsForServices:(id)arg0 ;
-(id)getFactorNamesForNonSkippableServices:(id)arg0 ;
-(id)getTrialAssetPathForTrialFactor:(id)arg0 assetFolder:(id)arg1 ;
-(id)initWithLocale:(id)arg0 ;


@end


#endif