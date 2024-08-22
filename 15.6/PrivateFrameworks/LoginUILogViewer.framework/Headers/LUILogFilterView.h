// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LUILOGFILTERVIEW_H
#define LUILOGFILTERVIEW_H

@class UIView, UIButton, UILabel, UIStackView, UITableView, UITextField, UICollectionView;



@interface LUILogFilterView : UIView

@property (retain, nonatomic) UIButton *addButton; // ivar: _addButton
@property (retain, nonatomic) UIButton *applyButton; // ivar: _applyButton
@property (retain, nonatomic) UILabel *currentPredicateLabel; // ivar: _currentPredicateLabel
@property (retain, nonatomic) UIStackView *enterPredicateStackView; // ivar: _enterPredicateStackView
@property (retain, nonatomic) UITableView *existingPredicatesTableView; // ivar: _existingPredicatesTableView
@property (retain, nonatomic) UIView *horizontalSeparatorLine; // ivar: _horizontalSeparatorLine
@property (retain, nonatomic) UITextField *predicateTextField; // ivar: _predicateTextField
@property (retain, nonatomic) UICollectionView *predicatesComparisonCandidateCollectionView; // ivar: _predicatesComparisonCandidateCollectionView
@property (retain, nonatomic) UICollectionView *predicatesKeyCandidateCollectionView; // ivar: _predicatesKeyCandidateCollectionView
@property (retain, nonatomic) UICollectionView *predicatesValueCandidateCollectionView; // ivar: _predicatesValueCandidateCollectionView
@property (retain, nonatomic) UIView *veriticalSeparatorLineFirst; // ivar: _veriticalSeparatorLineFirst
@property (retain, nonatomic) UIView *veriticalSeparatorLineSecond; // ivar: _veriticalSeparatorLineSecond


-(id)_createButtonWithTitle:(id)arg0 ;
-(id)_createCollectionView;
-(id)_createCurrentPredicateLabel;
-(id)_createEnterLabel;
-(id)_createEnterPredicateStackViewWithSubViews:(id)arg0 ;
-(id)_createPredicateTextField;
-(id)_createSeparatorLine;
-(id)_createTableView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;
-(void)layoutSubviews;


@end


#endif