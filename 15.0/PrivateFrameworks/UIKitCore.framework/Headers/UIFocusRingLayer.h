// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSRINGLAYER_H
#define UIFOCUSRINGLAYER_H

@class CAShapeLayer;



@interface UIFocusRingLayer : CAShapeLayer



+(id)focusLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)parentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedParentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_updateWithTintColor:(id)arg0 ;


@end


#endif