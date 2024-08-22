// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGZOOMLOUPEVIEW_H
#define UIDEBUGGINGZOOMLOUPEVIEW_H

@protocol UIDebuggingZoomDelegate;


#import "UIView.h"

@interface UIDebuggingZoomLoupeView : UIView

@property (nonatomic) CGPoint currentlyInspectedPoint; // ivar: _currentlyInspectedPoint
@property (weak, nonatomic) NSObject<UIDebuggingZoomDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif