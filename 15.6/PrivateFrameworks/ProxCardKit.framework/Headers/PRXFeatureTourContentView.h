// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXFEATURETOURCONTENTVIEW_H
#define PRXFEATURETOURCONTENTVIEW_H

@class UIView, NSArray, UIView<PRXTextContainer>, UILayoutGuide;


#import "PRXButton.h"

@interface PRXFeatureTourContentView : UIView {
    NSArray *_titleViewConstraints;
    NSArray *_bodyViewConstraints;
    NSArray *_dismissButtonConstraints;
    NSArray *_mainContentGuideConstraints;
}


@property (retain, nonatomic) UIView<PRXTextContainer> *bodyView; // ivar: _bodyView
@property (retain, nonatomic) PRXButton *dismissButton; // ivar: _dismissButton
@property (readonly, nonatomic) UILayoutGuide *mainContentGuide; // ivar: _mainContentGuide
@property (retain, nonatomic) UIView<PRXTextContainer> *titleView; // ivar: _titleView


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif