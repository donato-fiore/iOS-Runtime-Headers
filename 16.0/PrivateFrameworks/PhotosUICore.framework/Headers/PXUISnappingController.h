// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUISNAPPINGCONTROLLER_H
#define PXUISNAPPINGCONTROLLER_H

@class UISelectionFeedbackGenerator;


#import "PXSnappingController.h"

@interface PXUISnappingController : PXSnappingController

@property (retain, nonatomic, setter=_setSelectionBehavior:) UISelectionFeedbackGenerator *_selectionBehavior; // ivar: __selectionBehavior


-(id)initWithSnappingTarget:(CGFloat)arg0 ;
-(void)didSnapByAttraction;
-(void)interactionBegan;


@end


#endif