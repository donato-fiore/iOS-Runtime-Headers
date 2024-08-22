// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONPRIVACYDETAILSCELL_H
#define HKCLINICALAUTHORIZATIONPRIVACYDETAILSCELL_H

@class UITableViewCell, UITextView, NSLayoutConstraint, HKSource;


#import "_HKClinicalBulletedListLayoutManager.h"

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell

@property (readonly, nonatomic) _HKClinicalBulletedListLayoutManager *bulletLayoutManager; // ivar: _bulletLayoutManager
@property (readonly, nonatomic) UITextView *contentsTextView; // ivar: _contentsTextView
@property (readonly, nonatomic) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint; // ivar: _contentsTextViewLastBaselineToSuperviewBottomConstraint
@property (weak, nonatomic) HKSource *source; // ivar: _source
@property (readonly, nonatomic) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint; // ivar: _superviewTopToContentsTextViewFirstBaselineConstraint


-(id)_attributedContentsTextViewStringForCurrentContentSizeCategory;
-(id)_attributedStringForBullet;
-(id)_attributedStringForBulletAtIndex:(NSInteger)arg0 ;
-(id)_attributedTitleString;
-(id)_bodyEmph;
-(id)_bulletContentFont;
-(id)_bulletContentParagraphStyle;
-(id)_bulletFont;
-(id)_createContentsTextViewWithLayoutManager:(id)arg0 ;
-(id)_localizedBulletContentStringForBulletAtIndex:(NSInteger)arg0 ;
-(id)_localizedTitleString;
-(id)_titleParagraphStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif