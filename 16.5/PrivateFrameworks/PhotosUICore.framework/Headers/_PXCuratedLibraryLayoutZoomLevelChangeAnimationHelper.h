// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXCURATEDLIBRARYLAYOUTZOOMLEVELCHANGEANIMATIONHELPER_H
#define _PXCURATEDLIBRARYLAYOUTZOOMLEVELCHANGEANIMATIONHELPER_H

@class NSArray;
@protocol UICoordinateSpace;


#import "PXCuratedLibraryLayoutAnimationHelper.h"
#import "PXCuratedLibraryLayoutSnapshotGeometryDescriptor.h"
#import "PXVisualPositionsChangeDetails.h"
#import "PXCuratedLibrarySectionGeometryDescriptor.h"

@interface _PXCuratedLibraryLayoutZoomLevelChangeAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    NSUInteger _userInterfaceDirection;
    PXCuratedLibraryLayoutSnapshotGeometryDescriptor *_fromLayoutSnapshotGeometryDescriptor;
    PXCuratedLibraryLayoutSnapshotGeometryDescriptor *_toLayoutSnapshotGeometryDescriptor;
    NSArray *_changeDetails;
    PXVisualPositionsChangeDetails *_visualPositionsChangeDetails;
    NSInteger _transitionType;
    PXCuratedLibrarySectionGeometryDescriptor *_nullSectionGeometryDescriptor;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    BOOL _shouldAlwaysFadeDecoration;
}




-(BOOL)wantsDoubleSidedAnimations;
-(BOOL)wantsPresentationAdjustment;
-(CGFloat)animationDuration;
-(id)animation:(id)arg0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg1 rootLayout:(id)arg2 presentedGeometries:(struct ? *)arg3 styles:(struct ? *)arg4 infos:(struct ? *)arg5 ;
-(id)initWithLayout:(id)arg0 ;
-(unsigned int)highFrameRateReason;
-(void)_adjustGeometries:(struct ? *)arg0 styles:(struct ? *)arg1 infos:(struct ? *)arg2 spriteIndexRange:(struct _PXGSpriteIndexRange )arg3 appearing:(BOOL)arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustPresentedGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 count:(unsigned int)arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif