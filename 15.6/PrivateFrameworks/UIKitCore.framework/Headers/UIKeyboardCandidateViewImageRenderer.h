// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCANDIDATEVIEWIMAGERENDERER_H
#define UIKEYBOARDCANDIDATEVIEWIMAGERENDERER_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIKeyboardCandidateViewImageRenderer : NSObject

@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (weak, nonatomic) UIView *viewForTraitCollection; // ivar: _viewForTraitCollection


+(id)sharedImageRenderer;
-(id)drawGradientImage:(struct CGRect )arg0 startPoint:(struct CGPoint )arg1 endPoint:(struct CGPoint )arg2 applyScale:(BOOL)arg3 ;
-(id)edgeMaskImageForRightSide:(BOOL)arg0 ;
-(id)extensionMaskImage;
-(id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)arg0 highlighted:(BOOL)arg1 ;
-(id)highlightedBarCellBackgroundImageWithColor:(id)arg0 insets:(struct UIEdgeInsets )arg1 ;
-(id)init;
-(id)pocketShadowImageForDarkKeyboard:(BOOL)arg0 fadesToBottom:(BOOL)arg1 drawShadow:(BOOL)arg2 topPadding:(CGFloat)arg3 bottomPadding:(CGFloat)arg4 height:(CGFloat)arg5 ;


@end


#endif