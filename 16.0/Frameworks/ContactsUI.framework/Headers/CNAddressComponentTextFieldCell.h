// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNADDRESSCOMPONENTTEXTFIELDCELL_H
#define CNADDRESSCOMPONENTTEXTFIELDCELL_H

@class NUITableViewContainerCell, UIImageView, NSDictionary, UITextField, NSArray;



@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell

@property (retain, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (nonatomic) BOOL showsChevron; // ivar: _showsChevron
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (readonly, nonatomic) NSArray *textFields;


+(Class)containerViewClass;
+(id)cellIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)newTextField;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)prepareForReuse;
-(void)setupTextFields;
-(void)updateMargins;


@end


#endif