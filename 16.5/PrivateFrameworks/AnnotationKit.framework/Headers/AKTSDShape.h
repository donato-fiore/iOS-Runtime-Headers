// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTSDSHAPE_H
#define AKTSDSHAPE_H


#import <Foundation/Foundation.h>

#import "AKTSDBezierPath.h"
#import "AKTSDLineEnd.h"
#import "AKTSDBrushStroke.h"

@interface AKTSDShape : NSObject {
    ? mShapeInvalidFlags;
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
    CGFloat mHeadLineEndAngle;
    CGFloat mTailLineEndAngle;
    NSInteger mHeadCutSegment;
    NSInteger mTailCutSegment;
    CGFloat mHeadCutT;
    CGFloat mTailCutT;
    AKTSDBezierPath *mCachedClippedPath;
}


@property (retain, nonatomic) AKTSDLineEnd *headLineEnd; // ivar: _headLineEnd
@property (retain, nonatomic) AKTSDBezierPath *path; // ivar: _path
@property (retain, nonatomic) AKTSDBrushStroke *stroke; // ivar: _stroke
@property (retain, nonatomic) AKTSDLineEnd *tailLineEnd; // ivar: _tailLineEnd


-(CGFloat)lineEndScale;
-(id)_newClippedPath;
-(id)clippedPathForLineEnds;
-(id)init;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)p_computeAngle:(*CGFloat)arg0 point:(struct CGPoint *)arg1 cutSegment:(*NSInteger)arg2 cutT:(*CGFloat)arg3 forLineEndAtHead:(BOOL)arg4 ;
-(void)p_drawLineEndForHead:(BOOL)arg0 withDelta:(struct CGPoint )arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 ;
-(void)p_invalidateClippedPath;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(void)p_validateHeadAndTail;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;


@end


#endif