// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOBILEASSETUPDATER_H
#define MOBILEASSETUPDATER_H

@class NSLock, NSMutableArray, MAAsset, NSURL, NSString, MAAssetQuery;

#import <Foundation/Foundation.h>


@interface MobileAssetUpdater : NSObject {
    BOOL _participateInSeed;
    NSLock *_lock;
}


@property (copy, nonatomic) NSMutableArray *alternateAssetTypes; // ivar: _alternateAssetTypes
@property (retain) MAAsset *asset; // ivar: _asset
@property (readonly) BOOL assetAvailable;
@property (readonly) BOOL assetDownloaded; // ivar: _assetDownloaded
@property (retain) NSURL *assetLocation; // ivar: _assetLocation
@property (retain) NSURL *assetLocationOverride; // ivar: _assetLocationOverride
@property (copy) NSString *assetType; // ivar: _assetType
@property BOOL downloadOnCellularAllowed; // ivar: _downloadOnCellularAllowed
@property (copy) id *logger; // ivar: _logger
@property (readonly) BOOL overrideApplied; // ivar: _overrideApplied
@property (retain) NSString *overrideFile; // ivar: _overrideFile
@property (retain) NSString *purgeOverrideFile; // ivar: _purgeOverrideFile
@property (retain) MAAssetQuery *query; // ivar: _query
@property BOOL requireAssetMetadata; // ivar: _requireAssetMetadata


-(BOOL)filterAsset:(id)arg0 osBuild:(id)arg1 osVersion:(id)arg2 ;
-(BOOL)isDeploymentAllowed:(id)arg0 ;
-(id)assetWithMaxVersion:(id)arg0 ;
-(id)downloadAsset:(id)arg0 ;
-(id)filterFoundAssets:(id)arg0 ;
-(id)findAsset:(BOOL)arg0 completion:(id)arg1 ;
-(id)initWithAssetType:(id)arg0 ;
-(id)overrideQueryPredicateFromDict:(id)arg0 ;
-(id)validateAsset;
-(id)validateAssetAttributes:(id)arg0 ;
-(void)dealloc;
-(void)doneWithAsset;
-(void)downloadComplete:(NSInteger)arg0 completion:(id)arg1 ;
-(void)log:(int)arg0 format:(id)arg1 ;
-(void)purgeAsset;
-(void)queryComplete:(id)arg0 remote:(BOOL)arg1 status:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif