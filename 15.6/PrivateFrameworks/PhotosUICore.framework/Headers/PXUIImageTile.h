// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIIMAGETILE_H
#define PXUIIMAGETILE_H

@class NSString, UIView;
@protocol PXChangeObserver, PXUIViewBasicTile, PXReusableObject;

#import <Foundation/Foundation.h>

#import "PXImageUIView.h"
#import "PXImageViewSpec.h"
#import "PXImageRequester.h"

@interface PXUIImageTile : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    PXImageUIView *_imageView;
    NSUInteger _animationFlags;
}


@property (nonatomic, setter=_setAnimationCount:) NSInteger _animationCount; // ivar: __animationCount
@property (nonatomic, setter=_setContentSize:) CGSize _contentSize; // ivar: __contentSize
@property (nonatomic, setter=_setContentsRect:) CGRect _contentsRect; // ivar: __contentsRect
@property (nonatomic, setter=_setDisplayScale:) CGFloat _displayScale; // ivar: __displayScale
@property (retain, nonatomic, setter=_setSpec:) PXImageViewSpec *_spec; // ivar: __spec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsFocusRing; // ivar: _drawsFocusRing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(BOOL)_needsUpdate;
-(void)_invalidateImage;
-(void)_invalidateImageRequester;
-(void)_invalidateImageView;
-(void)_performChanges:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateImageIfNeeded;
-(void)_updateImageRequesterIfNeeded;
-(void)_updateImageViewIfNeeded;
-(void)becomeReusable;
-(void)didAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)willAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;


@end


#endif