// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCONTENTOVERLAYVIEW_H
#define AVCONTENTOVERLAYVIEW_H

@protocol AVContentOverlayViewDelegate;


#import "AVTouchIgnoringView.h"

@interface AVContentOverlayView : AVTouchIgnoringView

@property (weak, nonatomic) NSObject<AVContentOverlayViewDelegate> *delegate; // ivar: _delegate


-(void)_didRemoveSubview:(id)arg0 ;
-(void)didAddSubview:(id)arg0 ;


@end


#endif