// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUMARKUPCELL_H
#define SUMARKUPCELL_H



#import "SUTableCell.h"
#import "SUWebDocumentView.h"

@interface SUMarkupCell : SUTableCell {
    SUWebDocumentView *_webView;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif