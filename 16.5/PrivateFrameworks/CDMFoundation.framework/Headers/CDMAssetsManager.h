// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMASSETSMANAGER_H
#define CDMASSETSMANAGER_H

@class NSFileManager, NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "CDMDefaultAssetsManager.h"
#import "CDMTuriTrialAssetsManager.h"

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager *_cdmTuriTrialAssetsManager;
    NSFileManager *_fileManager;
}


@property (readonly, nonatomic) NSString *assetDirPath; // ivar: _assetDirPath
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


+(id)getFactorNamesForService:(id)arg0 ;
-(BOOL)areAssetsAvailableForServices:(id)arg0 inAssetPaths:(id)arg1 withError:(*id)arg2 ;
-(BOOL)areAssetsAvailableForServices:(id)arg0 inAssetPaths:(id)arg1 withError:(*id)arg2 selfMetadata:(id)arg3 selfContextId:(id)arg4 ;
-(BOOL)isAssetAvailableForService:(id)arg0 inAssetPaths:(id)arg1 withError:(*id)arg2 ;
-(BOOL)promoteAssetsForServices:(id)arg0 withFailedServices:(id)arg1 ;
-(BOOL)registerForServices:(id)arg0 withAssetsDelegate:(id)arg1 ;
-(BOOL)setAssetsProvisionalForServices:(id)arg0 ;
-(id)extractFactorAndFoldersForServices:(id)arg0 ;
-(id)getAssetsByFactorNamesForServices:(id)arg0 ;
-(id)getFactorNamesForNonSkippableServices:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 assetDirPath:(id)arg1 ;
-(id)processSideLoadedAssetForTrialAsset:(id)arg0 withAssetFolders:(id)arg1 ;
-(id)processTrialAsset:(id)arg0 withAssetFolders:(id)arg1 ;
-(void)setupWithError:(*id)arg0 ;


@end


#endif