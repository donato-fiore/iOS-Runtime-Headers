// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPIMAGESTACKVIEW_H
#define LPIMAGESTACKVIEW_H

@class NSArray, NSMutableArray;


#import "LPComponentView.h"
#import "LPImageViewStyle.h"

@interface LPImageStackView : LPComponentView {
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 images:(id)arg1 style:(id)arg2 ;
-(struct CGSize )_layoutImagesForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutComponentView;


@end


#endif