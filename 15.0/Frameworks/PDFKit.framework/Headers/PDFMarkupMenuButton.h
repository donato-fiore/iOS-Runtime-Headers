// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFMARKUPMENUBUTTON_H
#define PDFMARKUPMENUBUTTON_H

@class UIButton;


#import "PDFMarkupMenuButtonPrivate.h"

@interface PDFMarkupMenuButton : UIButton {
    PDFMarkupMenuButtonPrivate *_private;
}




-(id)initWithFrame:(struct CGRect )arg0 markupIcon:(int)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif