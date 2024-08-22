// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCHROMEPLACEHOLDERVIEWCONTROLLER_H
#define SSCHROMEPLACEHOLDERVIEWCONTROLLER_H

@class UIViewController, UIColor;


#import "SSChromePlaceholderView.h"

@interface SSChromePlaceholderViewController : UIViewController {
    SSChromePlaceholderView *_placeholderView;
}


@property (readonly, nonatomic) NSInteger backgroundBlurEffectStyle;
@property (nonatomic) CGFloat contentAlpha;
@property (readonly, nonatomic) UIColor *cropsCornerColor;
@property (readonly, nonatomic) CGFloat cropsCornerContentPadding;
@property (readonly, nonatomic) CGFloat cropsCornerEdgeLength;
@property (readonly, nonatomic) CGFloat cropsCornerLineWidth;
@property (readonly, nonatomic) CGRect screenshotContentFrame;


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredStatusBarStyle;
-(int)_preferredStatusBarVisibility;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif