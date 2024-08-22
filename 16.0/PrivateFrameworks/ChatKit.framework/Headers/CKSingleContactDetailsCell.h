// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSINGLECONTACTDETAILSCELL_H
#define CKSINGLECONTACTDETAILSCELL_H

@class UIImageView, NSString, UILabel;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKSingleContactDetailsCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UIImageView *chervonImageView; // ivar: _chervonImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)initConstraints;
-(void)layoutSubviews;


@end


#endif