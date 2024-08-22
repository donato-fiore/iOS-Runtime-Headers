// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIDATACLASSSPECIFIERCELL_H
#define AAUIDATACLASSSPECIFIERCELL_H

@class PSTableCell, UIImageView, UITextView, UILabel;



@interface AAUIDataclassSpecifierCell : PSTableCell

@property (retain, nonatomic) UIImageView *headerImageView; // ivar: _headerImageView
@property (retain, nonatomic) UITextView *headerSubTitleTextView; // ivar: _headerSubTitleTextView
@property (retain, nonatomic) UILabel *headerTitleLabel; // ivar: _headerTitleLabel


+(NSInteger)cellStyle;
+(id)_attributedStringFromSpecifier:(id)arg0 ;
+(id)_subTitleAttributes;
+(id)_subTitleFont;
+(struct _NSRange )_rangeForLinkFromSpecifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupViews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif