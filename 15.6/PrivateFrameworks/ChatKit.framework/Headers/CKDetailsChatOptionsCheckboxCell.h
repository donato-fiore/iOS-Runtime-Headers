// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSCHATOPTIONSCHECKBOXCELL_H
#define CKDETAILSCHATOPTIONSCHECKBOXCELL_H

@class UISwitch, NSString;
@protocol CKDetailsCell;


#import "CKTranscriptDetailsResizableCell.h"

@interface CKDetailsChatOptionsCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>



@property (retain, nonatomic) UISwitch *controlSwitch; // ivar: _controlSwitch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureNewControlSwitch;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif