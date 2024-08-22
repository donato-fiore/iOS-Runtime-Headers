// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSCONTINUOUSEXPOSELAYOUTTABLEVIEWCELL_H
#define DBSCONTINUOUSEXPOSELAYOUTTABLEVIEWCELL_H

@class UITableViewCell, UILayoutGuide, UIButton;


#import "DBSContinuousExposeLayoutAnimationView.h"
#import "DBSContinuousExposeLayoutCheckmarkStackView.h"

@interface DBSContinuousExposeLayoutTableViewCell : UITableViewCell

@property (retain, nonatomic) DBSContinuousExposeLayoutAnimationView *animationView; // ivar: _animationView
@property (retain, nonatomic) UILayoutGuide *bottomLayoutGuide; // ivar: _bottomLayoutGuide
@property (nonatomic) NSInteger currentDisplaySelection; // ivar: _currentDisplaySelection
@property (retain, nonatomic) UIButton *displaySelectionButton; // ivar: _displaySelectionButton
@property (retain, nonatomic) DBSContinuousExposeLayoutCheckmarkStackView *dockCheckmarkStackView; // ivar: _dockCheckmarkStackView
@property (nonatomic) BOOL isExternalDisplayConnected; // ivar: _isExternalDisplayConnected
@property (retain, nonatomic) UILayoutGuide *leftLayoutGuide; // ivar: _leftLayoutGuide
@property (retain, nonatomic) DBSContinuousExposeLayoutCheckmarkStackView *recentAppCheckmarkStackView; // ivar: _recentAppCheckmarkStackView
@property (retain, nonatomic) UILayoutGuide *rightLayoutGuide; // ivar: _rightLayoutGuide
@property (retain, nonatomic) UILayoutGuide *topLayoutGuide; // ivar: _topLayoutGuide


+(NSInteger)cellStyle;
-(BOOL)isLandscape;
-(CGFloat)scaleFactor;
-(NSUInteger)animationViewStateShowStrip:(BOOL)arg0 showDock:(BOOL)arg1 ;
-(id)displaySelectionMenuChildren:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureAnimationViews;
-(void)configureCell;
-(void)configureTapGestureRecognizer;
-(void)dockCheckmarkIsTapped:(id)arg0 ;
-(void)layoutAnimationViews;
-(void)layoutSubviews;
-(void)recentAppsCheckmarkIsTapped:(id)arg0 ;
-(void)updateCheckmarkStackViewSelection;


@end


#endif