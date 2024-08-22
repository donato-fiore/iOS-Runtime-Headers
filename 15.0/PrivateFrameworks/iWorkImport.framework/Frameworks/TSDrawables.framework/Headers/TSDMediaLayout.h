// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMEDIALAYOUT_H
#define TSDMEDIALAYOUT_H

@protocol TSDMediaSizeResetting;


#import "TSDStyledLayout.h"
#import "TSDMutableStroke.h"
#import "TSDMediaInfo.h"

@interface TSDMediaLayout : TSDStyledLayout <TSDMediaSizeResetting>

 {
    CGRect _cachedAlignmentFrame;
    ? _mediaInvalidFlags;
    TSDMutableStroke *_dynamicStroke;
}


@property (readonly, nonatomic) CGRect alignmentFrameInRoot;
@property (nonatomic) CGRect boundsForStandardKnobs; // ivar: _boundsForStandardKnobs
@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (nonatomic) BOOL shouldRenderFrameStroke; // ivar: _shouldRenderFrameStroke


-(BOOL)isStrokeBeingManipulated;
-(BOOL)supportsRotation;
-(id)initWithInfo:(id)arg0 ;
-(id)stroke;
-(struct CGRect )alignmentFrame;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(void)invalidateAlignmentFrame;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;


@end


#endif