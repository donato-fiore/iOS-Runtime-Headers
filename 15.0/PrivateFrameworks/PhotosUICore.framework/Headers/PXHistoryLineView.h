// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXHISTORYLINEVIEW_H
#define PXHISTORYLINEVIEW_H

@class UIView, UILabel;


#import "PXStateBadgeView.h"

@interface PXHistoryLineView : UIView {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_reasonLabel;
}




-(id)initWithHistoryLine:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHistoryLine:(id)arg0 ;


@end


#endif