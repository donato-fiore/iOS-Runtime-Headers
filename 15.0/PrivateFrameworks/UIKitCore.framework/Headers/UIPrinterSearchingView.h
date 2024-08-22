// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTERSEARCHINGVIEW_H
#define UIPRINTERSEARCHINGVIEW_H



#import "UIView.h"
#import "_UIPrintMessageAndSpinnerView.h"

@interface UIPrinterSearchingView : UIView {
    BOOL _constraintsSet;
}


@property (weak, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner; // ivar: _messageAndSpinner


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)searchTimeout;
-(void)setSearching:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateFont;


@end


#endif