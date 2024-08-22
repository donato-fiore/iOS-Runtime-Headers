// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKALIGNMENTGUIDECONTROLLER_H
#define AKALIGNMENTGUIDECONTROLLER_H


#import <Foundation/Foundation.h>

#import "AKPageController.h"

@interface AKAlignmentGuideController : NSObject {
    CGPoint _initialDraggedAnnotationsCombinedCenter;
    *CGPoint _otherAnnotationCenters;
    NSUInteger _otherAnnotationCentersCount;
}


@property BOOL exifHasFlippedAxes; // ivar: _exifHasFlippedAxes
@property (weak) AKPageController *pageController; // ivar: _pageController
@property CGFloat screenToModelScaleFactor; // ivar: _screenToModelScaleFactor


-(id)initWithPageController:(id)arg0 ;
-(struct CGPoint )guideAlignedPointForPoint:(struct CGPoint )arg0 withEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)dealloc;


@end


#endif