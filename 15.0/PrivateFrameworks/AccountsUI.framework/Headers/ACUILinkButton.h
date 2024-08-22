// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACUILINKBUTTON_H
#define ACUILINKBUTTON_H

@class UIButton, NSString;



@interface ACUILinkButton : UIButton

@property (retain) NSString *acui_titleString; // ivar: _acui_titleString


-(id)_highlightedStringAttributes;
-(id)_normalStringAttributes;
-(id)initWithText:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif