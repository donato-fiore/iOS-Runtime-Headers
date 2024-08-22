// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSVIEWINTERACTION_H
#define PXPHOTOSVIEWINTERACTION_H

@class NSString;
@protocol PXZoomablePhotosInteractionDelegate, PXPhotosViewInteractionDelegate;


#import "PXGInteraction.h"
#import "PXPhotosContentController.h"
#import "PXPhotosViewModel.h"
#import "PXZoomablePhotosInteraction.h"

@interface PXPhotosViewInteraction : PXGInteraction <PXZoomablePhotosInteractionDelegate>



@property (weak, nonatomic) PXPhotosContentController *contentController; // ivar: _contentController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosViewInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction; // ivar: _zoomablePhotosInteraction


+(id)interactionWithViewModel:(id)arg0 ;
-(?)regionOfInterestForAssetReference:(?)arg0 image:(?)arg1 fallbackMediaProvidershouldSnapshot;
-(BOOL)zoomablePhotosInteractionShouldBegin:(id)arg0 ;
-(id)assetHitTestResultAtPoint:(struct CGPoint )arg0 coordinateSpace:(id)arg1 ;
-(id)assetReferenceAtLocation:(struct CGPoint )arg0 withPadding:(struct UIEdgeInsets )arg1 inCoordinateSpace:(id)arg2 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)zoomablePhotosInteraction:(id)arg0 assetReferenceAtLocation:(struct CGPoint )arg1 ;
-(void)zoomablePhotosInteractionWillBegin:(id)arg0 ;


@end


#endif