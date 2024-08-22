// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSBOARDINGPASSFRONTFACEVIEW_H
#define PKPASSBOARDINGPASSFRONTFACEVIEW_H

@class UIImageView;


#import "PKPassFrontFaceView.h"

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView {
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}




-(id)_transitGlyphForTransitType:(NSInteger)arg0 ;
-(id)templateForLayoutMode:(NSInteger)arg0 ;
-(void)createBodyContentViews;
-(void)layoutSubviews;
-(void)setShowsBarcodeView:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif