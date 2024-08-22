// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUITHEMEMODELMESHRENDITION_H
#define _CUITHEMEMODELMESHRENDITION_H

@class MDLMesh, NSMutableArray, NSArray;


#import "CUIThemeRendition.h"

@interface _CUIThemeModelMeshRendition : CUIThemeRendition {
    MDLMesh *_mesh;
    NSMutableArray *_submeshKeys;
}


@property (readonly) NSArray *submeshKeys;


-(NSUInteger)writeToData:(id)arg0 ;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initForArchiving:(id)arg0 withSubmeshRenditionKeys:(id)arg1 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)modelMesh;
-(void)dealloc;


@end


#endif