// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSSEPARATORCELL_H
#define CKDETAILSSEPARATORCELL_H

@class UIView;


#import "CKDetailsCell.h"

@interface CKDetailsSeparatorCell : CKDetailsCell

@property (nonatomic) BOOL indentSeparator; // ivar: _indentSeparator
@property (nonatomic) CGFloat leadingSpace; // ivar: _leadingSpace
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView


+(CGFloat)defaultHeight;
+(CGFloat)defaultLeadingSpace;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif