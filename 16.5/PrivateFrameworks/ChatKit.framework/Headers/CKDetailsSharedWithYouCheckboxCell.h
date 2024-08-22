// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSSHAREDWITHYOUCHECKBOXCELL_H
#define CKDETAILSSHAREDWITHYOUCHECKBOXCELL_H

@class UISwitch, NSString, UILabel;
@protocol CKDetailsCell;


#import "CKTranscriptDetailsResizableCell.h"

@interface CKDetailsSharedWithYouCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>



@property (retain, nonatomic) UISwitch *controlSwitch; // ivar: _controlSwitch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureNewControlSwitch;
-(void)_configureNewTitleLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif