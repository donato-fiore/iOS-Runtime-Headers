// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKBUGFORMLABEL_H
#define FBKBUGFORMLABEL_H

@class UILabel, NSTextContainer, NSLayoutManager, NSTextStorage;



@interface FBKBugFormLabel : UILabel

@property (retain) NSTextContainer *container; // ivar: _container
@property (retain) NSLayoutManager *layoutManager; // ivar: _layoutManager
@property (retain) NSTextStorage *textStorage; // ivar: _textStorage


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_initLabel;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif