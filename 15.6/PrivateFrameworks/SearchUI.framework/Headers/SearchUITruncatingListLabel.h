// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUITRUNCATINGLISTLABEL_H
#define SEARCHUITRUNCATINGLISTLABEL_H

@class UIView, NSString, TLKLabel, NSArray;



@interface SearchUITruncatingListLabel : UIView

@property (retain, nonatomic) NSString *caption; // ivar: _caption
@property (retain, nonatomic) TLKLabel *label; // ivar: _label
@property (retain, nonatomic) NSArray *list; // ivar: _list


-(BOOL)canFitString:(id)arg0 forSize:(struct CGSize )arg1 ;
-(NSInteger)numberOfLines;
-(id)init;
-(id)text;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateCaption:(id)arg0 list:(id)arg1 ;
-(void)updateLabelForSize:(struct CGSize )arg0 ;


@end


#endif