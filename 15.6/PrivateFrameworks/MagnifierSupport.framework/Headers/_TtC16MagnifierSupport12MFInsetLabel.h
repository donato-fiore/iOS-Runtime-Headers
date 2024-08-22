// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT12MFINSETLABEL_H
#define _TTC16MAGNIFIERSUPPORT12MFINSETLABEL_H

@class UILabel;



@interface _TtC16MagnifierSupport12MFInsetLabel : UILabel {
    ? topInset;
    ? leftInset;
    ? bottomInset;
    ? rightInset;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;


@end


#endif