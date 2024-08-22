// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTICKYHEADERFOOTERTABLEWRAPPERVIEW_H
#define HKSTICKYHEADERFOOTERTABLEWRAPPERVIEW_H

@class UIView, NSArray, NSLayoutConstraint, UITableView;



@interface HKStickyHeaderFooterTableWrapperView : UIView

@property (nonatomic) NSInteger footerBehavior; // ivar: _footerBehavior
@property (retain, nonatomic) NSArray *footerConstraints; // ivar: _footerConstraints
@property (retain, nonatomic) NSLayoutConstraint *footerPinningConstraint; // ivar: _footerPinningConstraint
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) NSInteger headerBehavior; // ivar: _headerBehavior
@property (retain, nonatomic) NSArray *headerConstraints; // ivar: _headerConstraints
@property (retain, nonatomic) NSLayoutConstraint *headerPinningConstraint; // ivar: _headerPinningConstraint
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) CGSize previousFooterSize; // ivar: _previousFooterSize
@property (nonatomic) CGSize previousHeaderSize; // ivar: _previousHeaderSize
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)_createFooterConstraintsForBehavior:(NSInteger)arg0 ;
-(id)_createHeaderConstraintsForBehavior:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addFooterConstraintsForBehavior:(NSInteger)arg0 ;
-(void)_addHeaderConstraintsForBehavior:(NSInteger)arg0 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateFooterConstraintsWithPreviousBehavior:(NSInteger)arg0 ;
-(void)_updateHeaderConstraintsWithPreviousBehavior:(NSInteger)arg0 ;
-(void)_updatePinningConstraintConstantsForCurrentSafeArea;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;


@end


#endif