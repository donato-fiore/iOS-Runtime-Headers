// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFENUMERATIONSEGMENTEDCONTROLCOMPONENT_H
#define WFENUMERATIONSEGMENTEDCONTROLCOMPONENT_H

@class WFEnumerationParameter;


#import "CKComponent.h"

@interface WFEnumerationSegmentedControlComponent : CKComponent {
    WFEnumerationParameter *_parameter;
    id *_updateBlock;
}




+(CGFloat)estimatedWidthWithSegments:(id)arg0 ;
+(CGFloat)minimumWidthForSegmentWithTitle:(id)arg0 ;
+(CGFloat)perSegmentWidthWithSegments:(id)arg0 ;
// +(id)newWithParameter:(id)arg0 state:(id)arg1 updateBlock:(id)arg2 options:(unk)arg3  ;
-(void)segmentedControlSelectedSegmentChanged:(id)arg0 ;


@end


#endif