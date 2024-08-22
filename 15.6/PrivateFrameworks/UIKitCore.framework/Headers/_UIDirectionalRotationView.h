// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDIRECTIONALROTATIONVIEW_H
#define _UIDIRECTIONALROTATIONVIEW_H



#import "UIView.h"

@interface _UIDirectionalRotationView : UIView

@property (nonatomic, getter=isCounterTransformView) BOOL counterTransformView;
@property (nonatomic, getter=isInverseTransformView) BOOL inverseTransformView;


+(Class)layerClass;
-(id)drLayer;


@end


#endif