// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSLINEARMOVEMENTDEBUGVIEWLINESEGMENT_H
#define _UIFOCUSLINEARMOVEMENTDEBUGVIEWLINESEGMENT_H


#import <Foundation/Foundation.h>

#import "_UIFocusLinearMovementDebugViewLineSegment.h"
#import "UIBezierPath.h"

@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject {
    _UIFocusLinearMovementDebugViewLineSegment *_previousSegment;
    UIBezierPath *_stemPath;
    UIBezierPath *_arrowHeadPath;
}


@property (readonly, nonatomic) CGRect endRect; // ivar: _endRect
@property (readonly, nonatomic) CGRect startRect; // ivar: _startRect
@property (readonly, nonatomic) NSInteger type;


-(id)_calculateArrowHeadPath;
-(id)_calculateStemPathFrom:(struct CGRect )arg0 to:(struct CGRect )arg1 startPoint:(struct CGPoint *)arg2 endPoint:(struct CGPoint *)arg3 ;
-(id)_flattenedBezierPathFromBezierPath:(id)arg0 ;
-(id)_pathElementsFromPath:(id)arg0 ;
-(id)initWithStartRect:(struct CGRect )arg0 endRect:(struct CGRect )arg1 previousSegment:(id)arg2 ;
-(void)_calculatePaths;
-(void)_subdivideBezier:(id)arg0 startPoint:(struct CGPoint )arg1 controlPoint1:(struct CGPoint )arg2 controlPoint2:(struct CGPoint )arg3 endPoint:(struct CGPoint )arg4 ;
-(void)drawInRect:(struct CGRect )arg0 ;


@end


#endif