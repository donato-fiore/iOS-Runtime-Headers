// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGALIASTABLECELL_H
#define CNFREGALIASTABLECELL_H

@class PSTableCell, UIImageView, UIActivityIndicatorView;



@interface CNFRegAliasTableCell : PSTableCell

@property (nonatomic) BOOL hasSpinner; // ivar: _hasSpinner
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UIImageView *temporaryPhoneGlyph; // ivar: _temporaryPhoneGlyph


-(BOOL)usesStandardBackgroundImage;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateIcon;
-(void)dealloc;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setChecked:(BOOL)arg0 ;
-(void)setIsTemporaryPhone:(BOOL)arg0 ;


@end


#endif