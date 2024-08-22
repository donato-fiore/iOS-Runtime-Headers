// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMIRRORNINEPATCHVIEW_H
#define _UIMIRRORNINEPATCHVIEW_H



#import "UIView.h"
#import "UIImage.h"

@interface _UIMirrorNinePatchView : UIView {
    UIImage *_originalImage;
    UIEdgeInsets _insets;
    UIImageView" _imageViews;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateResizableImageAndViews;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 withResizableCornerSize:(struct CGSize )arg1 ;


@end


#endif