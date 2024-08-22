// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPCFULLCENTERCONTENTVIEWCONTROLLER_H
#define HUPCFULLCENTERCONTENTVIEWCONTROLLER_H

@class PRXCardContentViewController, UIView, NSLayoutConstraint, NSArray;



@interface HUPCFullCenterContentViewController : PRXCardContentViewController

@property (retain, nonatomic) UIView *centerContentView; // ivar: _centerContentView
@property (nonatomic) CGFloat contentViewMaxHeight; // ivar: _contentViewMaxHeight
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor; // ivar: _contentViewOptionalHeightAnchor
@property (retain, nonatomic) NSArray *floatingConstraintGroup; // ivar: _floatingConstraintGroup
@property (retain, nonatomic) NSArray *pinnedConstraintGroup; // ivar: _pinnedConstraintGroup


-(void)insertCenterContentView;
-(void)recalculateLayoutForTraitCollectionChange;
-(void)setCenteredContentView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif