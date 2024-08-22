// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXWALLPAPERSUGGESTIONVIEW_H
#define PXWALLPAPERSUGGESTIONVIEW_H

@class UIImageView, NSString;
@protocol PXChangeObserver, PXDisplayAsset;


#import "PXImageRequester.h"
#import "PXUIMediaProvider.h"

@interface PXWallpaperSuggestionView : UIImageView <PXChangeObserver>



@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) NSUInteger classificationMode; // ivar: _classificationMode
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property NSInteger currentImageIdentifier; // ivar: _currentImageIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL needsRoundedCorner; // ivar: _needsRoundedCorner
@property (retain, nonatomic) UIImageView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL showClockOverlay; // ivar: _showClockOverlay
@property (readonly) Class superclass;


+(id)sharedWorkQueue;
+(void)preloadResources;
+(void)requestSharedOverlayImageWithCompletionBlock:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif