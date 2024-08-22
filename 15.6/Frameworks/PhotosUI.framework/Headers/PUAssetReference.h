// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETREFERENCE_H
#define PUASSETREFERENCE_H

@class NSString, NSIndexPath, PXAssetReference;
@protocol NSCopying, PXAssetReferenceProtocol, PUDisplayAsset, PUDisplayAssetCollection;

#import <Foundation/Foundation.h>


@interface PUAssetReference : NSObject <NSCopying, PXAssetReferenceProtocol>



@property (readonly, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) NSObject<PUDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSString *dataSourceIdentifier; // ivar: _dataSourceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) PXAssetReference *pxAssetReference;
@property (readonly, nonatomic) PXSimpleIndexPath simpleIndexPath;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 assetCollection:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 ;


@end


#endif