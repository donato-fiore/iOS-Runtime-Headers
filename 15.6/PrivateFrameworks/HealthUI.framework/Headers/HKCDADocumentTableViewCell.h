// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCDADOCUMENTTABLEVIEWCELL_H
#define HKCDADOCUMENTTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSArray, UIStackView;
@protocol HKCDADocumentTableViewCellDelegate;


#import "_HKDocumentImageView.h"
#import "HKAdjustableTapTargetButton.h"

@interface HKCDADocumentTableViewCell : UITableViewCell {
    _HKDocumentImageView *_documentImageView;
    UILabel *_titleLabel;
    NSArray *_cellLabels;
    UIStackView *_imageLabelStack;
}


@property (retain, nonatomic) HKAdjustableTapTargetButton *checkboxButton; // ivar: _checkboxButton
@property (nonatomic, getter=isChecked) BOOL checked;
@property (weak, nonatomic) NSObject<HKCDADocumentTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsCheckbox; // ivar: _showsCheckbox


-(id)_createDocumentCellLabelWithTag:(NSInteger)arg0 fontSizePts:(CGFloat)arg1 flexibleHeight:(BOOL)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_selectedCheckbox:(id)arg0 ;
-(void)_setDocumentLabelWithTag:(NSInteger)arg0 text:(id)arg1 view:(id)arg2 ;
-(void)_setupCellStructure;
-(void)_updateForCurrentSizeCategory;
-(void)layoutSubviews;
-(void)setCellValuesForDocumentSample:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif