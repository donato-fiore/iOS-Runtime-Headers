// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWMODEFOCUSEDCLIPSVIEWTRANSITION_H
#define PXSTORYVIEWMODEFOCUSEDCLIPSVIEWTRANSITION_H

@class NSIndexSet;


#import "PXStoryViewModeTransition.h"

@interface PXStoryViewModeFocusedClipsViewTransition : PXStoryViewModeTransition

@property (readonly, nonatomic) NSIndexSet *focusedClipIdentifiers; // ivar: _focusedClipIdentifiers
@property (readonly, nonatomic) NSInteger trackingClipIdentifier; // ivar: _trackingClipIdentifier


-(CGFloat)zPositionForClipWithInfo:(struct ? )arg0 proposedZPosition:(CGFloat)arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(id)initWithSourceViewMode:(NSInteger)arg0 sourceSnapshot:(id)arg1 destinationViewMode:(NSInteger)arg2 destinationSnapshot:(id)arg3 assetReference:(id)arg4 ;
-(id)initWithSourceViewMode:(NSInteger)arg0 sourceSnapshot:(id)arg1 destinationViewMode:(NSInteger)arg2 destinationSnapshot:(id)arg3 assetReference:(id)arg4 focusedClipIdentifiers:(id)arg5 trackingClipIdentifier:(NSInteger)arg6 ;
-(struct ? )contentsTransformOverrideForClipWithInfo:(struct ? )arg0 proposedOverride:(struct ? )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(struct ? )cornerRadiusForClipWithInfo:(struct ? )arg0 proposedCornerRadius:(struct ? )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(struct CGRect )frameForClipWithInfo:(struct ? )arg0 proposedFrame:(struct CGRect )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;


@end


#endif