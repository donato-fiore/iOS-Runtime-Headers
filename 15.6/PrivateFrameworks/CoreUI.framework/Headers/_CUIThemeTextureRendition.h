// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMETEXTURERENDITION_H
#define _CUITHEMETEXTURERENDITION_H

@class TXRTextureInfo, NSMutableArray;


#import "CUIThemeRendition.h"
#import "CUIStructuredThemeStore.h"

@interface _CUIThemeTextureRendition : CUIThemeRendition {
    CUIStructuredThemeStore *_sourceProvider;
    NSInteger _textureInterpretation;
    BOOL _textureSourceImageOpaque;
    TXRTextureInfo *_textureInfo;
    NSMutableArray *_textureMipLevels;
}




-(NSInteger)textureIntepretation;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)_texturedImageWithKey:(id)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)mipLevels;
-(id)provideImageInfoAtLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 withBufferAllocator:(id)arg3 ;
-(id)provideTextureInfo;
-(void)_setStructuredThemeStore:(id)arg0 ;
-(void)dealloc;


@end


#endif