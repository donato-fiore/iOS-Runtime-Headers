// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCOLLAPSIBLECONTAINERVIEW_H
#define ICCOLLAPSIBLECONTAINERVIEW_H

@class UIView;


#import "ICCollapsibleBaseView.h"

@interface ICCollapsibleContainerView : ICCollapsibleBaseView

@property (retain, nonatomic) UIView *containedView; // ivar: _containedView


-(void)performSetup;


@end


#endif