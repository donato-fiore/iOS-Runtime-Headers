// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAMENITYITEMIMAGEVIEW_H
#define MUAMENITYITEMIMAGEVIEW_H

@class MKViewWithHairline, UIImageView, NSLayoutConstraint;



@interface MUAmenityItemImageView : MKViewWithHairline {
    UIImageView *_nfcImageView;
    UIImageView *_applePayImageView;
    NSLayoutConstraint *_leadingConstraint;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupImageView;


@end


#endif