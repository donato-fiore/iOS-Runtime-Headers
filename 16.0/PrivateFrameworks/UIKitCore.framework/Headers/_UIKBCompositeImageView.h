// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBCOMPOSITEIMAGEVIEW_H
#define _UIKBCOMPOSITEIMAGEVIEW_H

@class NSArray;


#import "UIView.h"

@interface _UIKBCompositeImageView : UIView

@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSArray *imageViews; // ivar: _imageViews


-(void)layoutSubviews;


@end


#endif