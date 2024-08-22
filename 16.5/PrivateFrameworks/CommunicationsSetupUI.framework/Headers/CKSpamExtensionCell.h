// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSPAMEXTENSIONCELL_H
#define CKSPAMEXTENSIONCELL_H

@class PSTableCell;



@interface CKSpamExtensionCell : PSTableCell



-(BOOL)usesStandardBackgroundImage;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setChecked:(BOOL)arg0 ;


@end


#endif