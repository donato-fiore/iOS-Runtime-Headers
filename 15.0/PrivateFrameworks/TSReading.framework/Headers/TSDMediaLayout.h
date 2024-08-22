// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMEDIALAYOUT_H
#define TSDMEDIALAYOUT_H



#import "TSDStyledLayout.h"
#import "TSDMutableStroke.h"

@interface TSDMediaLayout : TSDStyledLayout {
    CGRect mCachedAlignmentFrame;
    ? mMediaInvalidFlags;
    TSDMutableStroke *mDynamicStroke;
    BOOL mShouldRenderFrameStroke;
    CGRect mBoundsForStandardKnobs;
}


@property (nonatomic) CGRect boundsForStandardKnobs;
@property (nonatomic) BOOL shouldRenderFrameStroke;


-(BOOL)isStrokeBeingManipulated;
-(BOOL)supportsRotation;
-(id)initWithInfo:(id)arg0 ;
-(id)mediaInfo;
-(id)stroke;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthChangeDidEnd;
-(void)dynamicStrokeWidthUpdateToValue:(CGFloat)arg0 ;
-(void)invalidateAlignmentFrame;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;


@end


#endif