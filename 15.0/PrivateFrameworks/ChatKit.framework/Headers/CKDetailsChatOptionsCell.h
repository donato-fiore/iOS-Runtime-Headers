// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSCHATOPTIONSCELL_H
#define CKDETAILSCHATOPTIONSCELL_H

@class UISwitch, NSString;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsChatOptionsCell : CKDetailsCell <CKDetailsCell>



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