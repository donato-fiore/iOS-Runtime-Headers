// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDASSETPACKDISTILLER_H
#define TDASSETPACKDISTILLER_H

@class NSSet;


#import "TDDistiller.h"

@interface TDAssetPackDistiller : TDDistiller

@property (retain, nonatomic) NSSet *assetPackMap; // ivar: assetPackMap


-(BOOL)assetStoreWriteToDisk;
-(BOOL)setAsset:(id)arg0 withKey:(struct _renditionkeytoken *)arg1 fromRenditionSpec:(id)arg2 ;
-(id)assetPackForTags:(id)arg0 ;
-(id)initWithDocument:(id)arg0 outputPath:(id)arg1 versionString:(id)arg2 usingAssetPackMapping:(id)arg3 attemptIncremental:(BOOL)arg4 ;
-(void)dealloc;
-(void)removeRenditionsFromAssetStoreWithKey:(id)arg0 ;
-(void)setAssetColorSpaceID:(unsigned int)arg0 ;
-(void)setAssetSchemaVersion:(unsigned int)arg0 ;
-(void)setAssetStorageVersion:(unsigned int)arg0 ;
-(void)setAssetStorageVersionString:(char *)arg0 ;
-(void)setAssetStoreAssociatedChecksum:(unsigned int)arg0 ;
-(void)setAssetStoreKeyFormatData:(id)arg0 ;
-(void)setAssetStoreKeySemantics:(int)arg0 ;
-(void)setAssetStoreRenditionCount:(unsigned int)arg0 ;
-(void)setAssetStoreUuid:(id)arg0 ;


@end


#endif