// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDMODELRENDITIONSPEC_H
#define TDMODELRENDITIONSPEC_H

@class NSSet;


#import "TDRenditionSpec.h"
#import "TDModelAsset.h"

@interface TDModelRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDModelAsset *asset;
@property (retain, nonatomic) NSSet *childRenditions;
@property (nonatomic) int modelAssetIndex;


+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)processMesh:(id)arg0 withAssetMeshIndex:(*unsigned int)arg1 assetKeySpec:(id)arg2 inDocument:(id)arg3 ;
-(void)processModelObjectsInDocument:(id)arg0 ;


@end


#endif