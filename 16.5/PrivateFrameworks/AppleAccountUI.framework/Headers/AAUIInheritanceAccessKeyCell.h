// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIINHERITANCEACCESSKEYCELL_H
#define AAUIINHERITANCEACCESSKEYCELL_H

@class PSTableCell, UITextView, UIImageView;



@interface AAUIInheritanceAccessKeyCell : PSTableCell

@property (retain, nonatomic) UITextView *accessKeyTextView; // ivar: _accessKeyTextView
@property (retain, nonatomic) UIImageView *qrCodeImageView; // ivar: _qrCodeImageView


+(id)specifierForAcessKey:(id)arg0 qrCodeImage:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupViews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif