// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBWELCOMEFULLCENTERCONTENTCONTROLLER_H
#define OBWELCOMEFULLCENTERCONTENTCONTROLLER_H

@class UIView, NSLayoutConstraint, NSArray;


#import "OBWelcomeController.h"

@interface OBWelcomeFullCenterContentController : OBWelcomeController

@property (retain, nonatomic) UIView *centerContentView; // ivar: _centerContentView
@property (nonatomic) CGFloat contentViewMaxHeight; // ivar: _contentViewMaxHeight
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor; // ivar: _contentViewOptionalHeightAnchor
@property (retain, nonatomic) NSArray *floatingConstraintGroup; // ivar: _floatingConstraintGroup
@property (retain, nonatomic) NSArray *pinnedConstraintGroup; // ivar: _pinnedConstraintGroup


-(CGFloat)_availablePreScrollContentHeight;
-(void)insertCenterContentView;
-(void)recalculateLayoutForTraitCollectionChange;
-(void)setCenteredContentView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif