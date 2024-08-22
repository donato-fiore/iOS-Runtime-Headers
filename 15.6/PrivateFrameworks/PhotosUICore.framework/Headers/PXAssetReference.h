// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETREFERENCE_H
#define PXASSETREFERENCE_H

@class NSString;
@protocol PXAssetReferenceProtocol, PXDisplayAsset, PXDisplayAssetCollection;


#import "PXSectionedObjectReference.h"

@interface PXAssetReference : PXSectionedObjectReference <PXAssetReferenceProtocol>



@property (readonly, nonatomic) id *asset;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset;
@property (readonly, nonatomic) id *assetCollection;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXSimpleIndexPath simpleIndexPath;
@property (readonly) Class superclass;




@end


#endif