// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKEXPLOREGUIDESVIEW_H
#define MKEXPLOREGUIDESVIEW_H

@class UIView, UIButton, GEOExploreGuides, UIImageView, UIStackView;



@interface MKExploreGuidesView : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) GEOExploreGuides *exploreGuide; // ivar: _exploreGuide
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIStackView *labelsStack; // ivar: _labelsStack
@property (copy, nonatomic) id *tapHandler; // ivar: _tapHandler


+(CGFloat)defaultHeight;
-(id)initWithExploreGuides:(id)arg0 tapHandler:(id)arg1 ;
-(void)didSelectExploreGuides:(id)arg0 ;
-(void)setupConstraints;
-(void)setupImage;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateExploreGuide:(id)arg0 ;
-(void)updateUI;


@end


#endif