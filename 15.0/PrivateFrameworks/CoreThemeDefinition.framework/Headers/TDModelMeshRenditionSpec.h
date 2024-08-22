// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDMODELMESHRENDITIONSPEC_H
#define TDMODELMESHRENDITIONSPEC_H

@class NSOrderedSet;


#import "TDModelObjectRenditionSpec.h"

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (retain, nonatomic) NSOrderedSet *submeshes;


+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)processSubMesh:(id)arg0 withAssetSubmeshIndex:(*unsigned int)arg1 assetKeySpec:(id)arg2 inDocument:(id)arg3 ;


@end


#endif