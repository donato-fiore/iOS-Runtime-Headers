// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERRECENTSOVERLAYVIEWLAYOUT_H
#define AVTSTICKERRECENTSOVERLAYVIEWLAYOUT_H


#import <Foundation/Foundation.h>


@interface AVTStickerRecentsOverlayViewLayout : NSObject

@property (readonly, nonatomic) CGFloat horizontalEdgePadding; // ivar: _horizontalEdgePadding
@property (readonly, nonatomic) CGFloat imageHeight; // ivar: _imageHeight
@property (readonly, nonatomic) CGFloat imageToTitlePadding; // ivar: _imageToTitlePadding
@property (readonly, nonatomic) CGFloat imageToTopPadding; // ivar: _imageToTopPadding
@property (readonly, nonatomic) CGFloat subtitleToButtonPadding; // ivar: _subtitleToButtonPadding
@property (readonly, nonatomic) CGFloat titleToSubtitlePadding; // ivar: _titleToSubtitlePadding


+(id)buttonsLandscapeLayout;
+(id)buttonsPortraitLayout;
+(id)standardLandscapeLayout;
+(id)standardPortraitLayout;
-(id)initWithImageToTopPadding:(CGFloat)arg0 imageToTitlePadding:(CGFloat)arg1 titleToSubtitlePadding:(CGFloat)arg2 subtitleToButtonPadding:(CGFloat)arg3 imageHeight:(CGFloat)arg4 horizontalEdgePadding:(CGFloat)arg5 ;


@end


#endif