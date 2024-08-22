// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYACTIONCELLTITLELABEL_H
#define _UIACTIVITYACTIONCELLTITLELABEL_H

@class UILabel, NSString;



@interface _UIActivityActionCellTitleLabel : UILabel

@property (retain, nonatomic) NSString *textStyle; // ivar: _textStyle


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 sizeCategory:(id)arg1 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFontWithSizeCategory:(id)arg0 ;


@end


#endif