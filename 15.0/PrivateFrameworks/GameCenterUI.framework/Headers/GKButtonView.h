// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKBUTTONVIEW_H
#define GKBUTTONVIEW_H

@class UICollectionReusableView, UIButton, NSMutableArray;


#import "GKCollectionViewDataSource.h"

@interface GKButtonView : UICollectionReusableView

@property (nonatomic) SEL action; // ivar: _action
@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSMutableArray *buttonConstraints; // ivar: _buttonConstraints
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource; // ivar: _dataSource


+(BOOL)requiresConstraintBasedLayout;
+(void)registerSupplementaryViewClassesForKind:(id)arg0 withCollectionView:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)updateConstraints;


@end


#endif