// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPHARDWAREVIEW_H
#define PNPHARDWAREVIEW_H

@class UIView;


#import "PNPPencilView.h"
#import "PNPSyntheticPencilInteractionEventSource.h"

@interface PNPHardwareView : UIView {
    PNPPencilView *_pencilView;
    PNPSyntheticPencilInteractionEventSource *_eventSource;
}


@property (nonatomic) NSUInteger animationType; // ivar: _animationType


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif