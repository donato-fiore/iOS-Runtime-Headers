// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMICROPIPBUTTONVIEW_H
#define PGMICROPIPBUTTONVIEW_H

@class UIView;


#import "PGLayerHostView.h"
#import "PGHostedWindowHostingHandle.h"

@interface PGMicroPIPButtonView : UIView {
    PGLayerHostView *_layerHostView;
}


@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;


+(id)button;
-(void)layoutSubviews;


@end


#endif