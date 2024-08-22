// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LUILOGLOCATORVIEW_H
#define LUILOGLOCATORVIEW_H

@class UIView, UIButton, UICollectionView;



@interface LUILogLocatorView : UIView

@property (retain, nonatomic) UIButton *downArrowButton; // ivar: _downArrowButton
@property (retain, nonatomic) UIButton *screenshotButton; // ivar: _screenshotButton
@property (retain, nonatomic) UICollectionView *screenshotCollectionView; // ivar: _screenshotCollectionView
@property (retain, nonatomic) UIButton *upArrowButton; // ivar: _upArrowButton


-(id)_createButtonWithImageName:(id)arg0 ;
-(id)_createElementStackViewWithElements:(id)arg0 ;
-(id)_createScreenshotCollectionView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;
-(void)handleOrientationChange:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif