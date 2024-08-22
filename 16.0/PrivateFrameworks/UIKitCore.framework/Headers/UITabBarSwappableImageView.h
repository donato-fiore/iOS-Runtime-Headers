// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABBARSWAPPABLEIMAGEVIEW_H
#define UITABBARSWAPPABLEIMAGEVIEW_H



#import "UIImageView.h"
#import "UIImage.h"

@interface UITabBarSwappableImageView : UIImageView {
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    BOOL _showAlternate;
    BOOL _showLandscape;
}




-(id)_selectedCompactImage;
-(id)_selectedImage;
-(id)_unselectedCompactImage;
-(id)_unselectedImage;
-(id)initWithImage:(id)arg0 alternateImage:(id)arg1 landscapeImage:(id)arg2 landscapeAlternateImage:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)setAlternateImage:(id)arg0 ;
-(void)setCurrentImage;
-(void)setImage:(id)arg0 ;
-(void)setLandscape:(BOOL)arg0 ;
-(void)showAlternateImage:(BOOL)arg0 ;


@end


#endif