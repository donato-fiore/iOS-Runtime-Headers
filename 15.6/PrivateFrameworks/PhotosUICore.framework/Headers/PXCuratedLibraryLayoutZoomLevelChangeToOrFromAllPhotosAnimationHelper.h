// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYLAYOUTZOOMLEVELCHANGETOORFROMALLPHOTOSANIMATIONHELPER_H
#define PXCURATEDLIBRARYLAYOUTZOOMLEVELCHANGETOORFROMALLPHOTOSANIMATIONHELPER_H



#import "PXCuratedLibraryLayoutAnimationHelper.h"
#import "_PXCuratedLibraryLayoutAssetsSnapshot.h"

@interface PXCuratedLibraryLayoutZoomLevelChangeToOrFromAllPhotosAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    _PXCuratedLibraryLayoutAssetsSnapshot *_fromSnapshot;
    _PXCuratedLibraryLayoutAssetsSnapshot *_toSnapshot;
}




-(CGFloat)animationDuration;
-(id)_snapshotForZoomLevel:(NSInteger)arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(unsigned int)highFrameRateReason;
-(void)_adjustGeometries:(struct ? *)arg0 styles:(struct ? *)arg1 infos:(struct ? *)arg2 spriteIndexRange:(struct _PXGSpriteIndexRange )arg3 appearing:(BOOL)arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif