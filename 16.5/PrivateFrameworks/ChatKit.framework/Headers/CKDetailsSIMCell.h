// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSSIMCELL_H
#define CKDETAILSSIMCELL_H

@class UIButton, NSString, UIMenu, UILabel;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly, nonatomic) UILabel *simLabel; // ivar: _simLabel
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(CGFloat)preferredHeight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 simLabelText:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSIMLabelText:(id)arg0 ;


@end


#endif