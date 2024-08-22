// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVTEXTBADGE_H
#define _TVTEXTBADGE_H

@class UIView, NSAttributedString, UIColor, NSString;



@interface _TVTextBadge : UIView

@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (retain, nonatomic) NSAttributedString *text; // ivar: _text
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) NSString *type; // ivar: _type


+(id)textBadgeViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif