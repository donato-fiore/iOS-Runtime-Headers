// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAPEDRAWINGCONTROLLER_H
#define PKSHAPEDRAWINGCONTROLLER_H

@class UIView, NSUUID, CHRecognizer;
@protocol PKShapeDrawingControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKShape.h"
#import "PKStrokeRenderMask.h"

@interface PKShapeDrawingController : NSObject {
    UIView *_view;
    vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> _currentStrokePoints;
    CGRect _currentStrokeBounds;
    BOOL _closedShapeDetected;
    BOOL _stopGestureDetected;
    BOOL _shouldDetect;
    vector<TimestampedPoint, std::allocator<TimestampedPoint>> _timestampedPoints;
    ? _averageInputPoint;
    NSUInteger _numInputPoints;
    CGFloat _strokeStartTime;
    CGFloat _latestAddedPointTime;
    CGFloat _strokeDuration;
    CGFloat _minimumRecognitionDelay;
    CGFloat _maximumRecognitionDelay;
    BOOL _smartFillEnabled;
    BOOL _shapeRecognitionOn;
    id<PKShapeDrawingControllerDelegate> *_delegate;
    PKShape *_detectedShape;
    PKStrokeRenderMask *_smartFillRenderMask;
    NSUUID *_smartFillGroupID;
    CHRecognizer *_shapeRecognizer;
}






@end


#endif