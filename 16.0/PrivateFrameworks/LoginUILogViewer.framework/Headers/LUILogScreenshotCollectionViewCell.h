// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LUILOGSCREENSHOTCOLLECTIONVIEWCELL_H
#define LUILOGSCREENSHOTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIButton, UILabel, UIImageView;



@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (copy, nonatomic) id *clearButtonAction; // ivar: _clearButtonAction
@property (readonly, nonatomic) UILabel *screenshotDateLabel; // ivar: _screenshotDateLabel
@property (readonly, nonatomic) UIImageView *screenshotImageView; // ivar: _screenshotImageView


-(id)_createClearButton;
-(id)_createScreenshotDateLabel;
-(id)_createScreenshotImageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;
-(void)clearButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif