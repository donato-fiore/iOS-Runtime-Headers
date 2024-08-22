// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOBROWSERONEUPPRESENTATIONADAPTOR_H
#define PUPHOTOBROWSERONEUPPRESENTATIONADAPTOR_H

@class NSSet, NSString;
@protocol PUOneUpPresentationHelperAssetDisplayDelegate, PUPhotoBrowserZoomTransitionDelegate;

#import <Foundation/Foundation.h>


@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate>

 {
    ? _zoomTransitionDelegateFlags;
}


@property (copy, nonatomic, setter=_setPhotoTokensForHiddenAssetReferences:) NSSet *_photoTokensForHiddenAssetReferences; // ivar: __photoTokensForHiddenAssetReferences
@property (nonatomic, setter=_setShouldDisableScroll:) BOOL _shouldDisableScroll; // ivar: __shouldDisableScroll
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PUPhotoBrowserZoomTransitionDelegate> *zoomTransitionDelegate; // ivar: _zoomTransitionDelegate


-(id)_photoTokenForAssetReference:(id)arg0 ;
-(id)oneUpPresentationHelper:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentationHelper:(id)arg0 regionOfInterestForAssetReference:(id)arg1 cropInsets:(struct UIEdgeInsets *)arg2 contentsRect:(struct CGRect *)arg3 ;
-(void)oneUpPresentationHelper:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 shouldDisableScroll:(BOOL)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 shouldHideAssetReferences:(id)arg1 ;


@end


#endif