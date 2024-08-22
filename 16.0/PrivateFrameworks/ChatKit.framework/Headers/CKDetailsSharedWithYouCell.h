// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSSHAREDWITHYOUCELL_H
#define CKDETAILSSHAREDWITHYOUCELL_H

@class UISwitch, NSString;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsSharedWithYouCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UISwitch *controlSwitch; // ivar: _controlSwitch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(CGFloat)estimatedHeight;
+(CGFloat)preferredHeight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureNewControlSwitch;
-(void)prepareForReuse;


@end


#endif