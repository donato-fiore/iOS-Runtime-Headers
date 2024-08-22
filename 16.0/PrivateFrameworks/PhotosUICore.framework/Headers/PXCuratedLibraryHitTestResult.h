// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYHITTESTRESULT_H
#define PXCURATEDLIBRARYHITTESTRESULT_H



#import "PXGHitTestResult.h"
#import "PXAssetCollectionReference.h"
#import "PXAssetReference.h"

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (readonly, nonatomic) PXAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) NSInteger control; // ivar: _control


-(id)initWithControl:(NSInteger)arg0 spriteReference:(id)arg1 layout:(id)arg2 ;
-(id)initWithControl:(NSInteger)arg0 spriteReference:(id)arg1 layout:(id)arg2 assetCollectionReference:(id)arg3 ;
-(id)initWithControl:(NSInteger)arg0 spriteReference:(id)arg1 layout:(id)arg2 assetReference:(id)arg3 ;
-(id)initWithControl:(NSInteger)arg0 spriteReference:(id)arg1 layout:(id)arg2 assetReference:(id)arg3 assetCollectionReference:(id)arg4 ;
-(id)initWithSpriteReference:(id)arg0 layout:(id)arg1 identifier:(id)arg2 userData:(id)arg3 ;


@end


#endif