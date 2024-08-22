// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMEMODELSUBMESHRENDITION_H
#define _CUITHEMEMODELSUBMESHRENDITION_H

@class MDLSubmesh;


#import "CUIThemeRendition.h"

@interface _CUIThemeModelSubmeshRendition : CUIThemeRendition {
    MDLSubmesh *_submesh;
}




-(NSUInteger)writeToData:(id)arg0 ;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initForArchiving:(id)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)modelSubmesh;
-(void)dealloc;


@end


#endif