// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUITHEMEMODELASSETRENDITION_H
#define _CUITHEMEMODELASSETRENDITION_H

@class MDLAsset, NSMutableArray, NSArray;


#import "CUIThemeRendition.h"

@interface _CUIThemeModelAssetRendition : CUIThemeRendition {
    MDLAsset *_asset;
    NSMutableArray *_meshKeys;
}


@property (readonly) NSArray *meshKeys;


-(NSUInteger)writeToData:(id)arg0 ;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initForArchiving:(id)arg0 withMeshRenditionKeys:(id)arg1 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)modelAsset;
-(void)dealloc;


@end


#endif