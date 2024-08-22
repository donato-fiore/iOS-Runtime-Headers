// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISELECTABLETEXTVIEW_H
#define SEARCHUISELECTABLETEXTVIEW_H

@class TLKTextView;



@interface SearchUISelectableTextView : TLKTextView

@property (nonatomic) BOOL allowsDefine; // ivar: _allowsDefine


-(BOOL)_canDefine;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)_define:(id)arg0 ;


@end


#endif