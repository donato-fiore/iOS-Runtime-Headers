// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPASSETCACHECLIENTCACHE_H
#define SPASSETCACHECLIENTCACHE_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SPAssetCacheClientCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *assets; // ivar: _assets
@property (nonatomic) NSUInteger cacheType; // ivar: _cacheType
@property (retain, nonatomic) NSString *gizmoCacheIdentifier; // ivar: _gizmoCacheIdentifier
@property (retain, nonatomic) NSMutableArray *keys; // ivar: _keys
@property (nonatomic) NSInteger size; // ivar: _size


-(BOOL)addAsset:(id)arg0 withName:(id)arg1 sendImage:(BOOL)arg2 ;
-(BOOL)checkAvailableSpaceForAssetWithName:(id)arg0 length:(NSUInteger)arg1 ;
-(BOOL)saveAssetData:(id)arg0 forAsset:(id)arg1 ;
-(id)cacheDirectory;
-(id)cachedImages;
-(id)dataForImageWithName:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 cacheType:(NSUInteger)arg1 ;
-(id)pathForAssetDataWithName:(id)arg0 ;
-(void)addedAssetWithName:(id)arg0 ;
-(void)clearSpaceForAsset:(NSUInteger)arg0 ;
-(void)clearedCache;
-(void)deleteAllAssets;
-(void)deleteAsset:(id)arg0 ;
-(void)deleteAssetWithName:(id)arg0 ;
-(void)deleteDataForAsset:(id)arg0 ;
-(void)deletedAssetWithName:(id)arg0 ;
-(void)syncAssets:(id)arg0 ;


@end


#endif