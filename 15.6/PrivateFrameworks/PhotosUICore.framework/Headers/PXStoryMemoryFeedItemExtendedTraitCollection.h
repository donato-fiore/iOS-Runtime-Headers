// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMEMORYFEEDITEMEXTENDEDTRAITCOLLECTION_H
#define PXSTORYMEMORYFEEDITEMEXTENDEDTRAITCOLLECTION_H

@class NSShadow;


#import "PXStoryExtendedTraitCollection.h"

@interface PXStoryMemoryFeedItemExtendedTraitCollection : PXStoryExtendedTraitCollection {
    CGFloat _viewportCornerRadius;
    NSShadow *_viewportShadow;
    NSInteger _userInterfaceFeature;
}




-(CGFloat)viewportCornerRadius;
-(NSInteger)userInterfaceFeature;
-(id)initWithSpecManager:(id)arg0 initialReferenceSize:(struct CGSize )arg1 ;
-(id)viewportShadow;


@end


#endif