// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEWTABLEHEADERFOOTERVIEW_H
#define UICOLLECTIONVIEWTABLEHEADERFOOTERVIEW_H



#import "UICollectionReusableView.h"
#import "UIView.h"
#import "UILabel.h"
#import "UICollectionViewTableLayoutAttributes.h"
#import "UICollectionViewTableLayout.h"
#import "UITableViewHeaderFooterView.h"
#import "UIColor.h"

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) BOOL floating; // ivar: _floating
@property (readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
@property (retain, nonatomic) UITableViewHeaderFooterView *tableViewHeaderFooterView; // ivar: _tableViewHeaderFooterView
@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIColor *tintColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_commonInit;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif