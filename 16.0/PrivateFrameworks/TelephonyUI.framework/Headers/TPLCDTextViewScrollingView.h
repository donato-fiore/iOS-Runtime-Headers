// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPLCDTEXTVIEWSCROLLINGVIEW_H
#define TPLCDTEXTVIEWSCROLLINGVIEW_H

@class UIView;


#import "TPLCDTextView.h"

@interface TPLCDTextViewScrollingView : UIView {
    TPLCDTextView *_owner;
}




-(id)initWithFrame:(struct CGRect )arg0 owner:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setOwner:(id)arg0 ;


@end


#endif