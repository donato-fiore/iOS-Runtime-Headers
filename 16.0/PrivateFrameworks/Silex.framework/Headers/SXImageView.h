// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXIMAGEVIEW_H
#define SXIMAGEVIEW_H

@class UIImageView, NSTimer, UIActivityIndicatorView, NSString, UIView, UIImage, NSMapTable, UILongPressGestureRecognizer;
@protocol SXAXCustomRotorItemProvider, SXAnimatedImageDelegate, SWReachabilityObserver, SXDraggable, SXImageViewDelegate, NSItemProviderWriting, SWReachabilityProvider, SXResourceDataSource;


#import "SXAnimatedImage.h"
#import "SXImageResource.h"

@interface SXImageView : UIImageView <SXAXCustomRotorItemProvider, SXAnimatedImageDelegate, SWReachabilityObserver, SXDraggable>



@property (retain, nonatomic) NSTimer *activeTimer; // ivar: _activeTimer
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (readonly, nonatomic) SXAnimatedImage *animatedImage; // ivar: _animatedImage
@property (nonatomic) BOOL autoPlayEnabled; // ivar: _autoPlayEnabled
@property (readonly, nonatomic) BOOL containsAnimatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXImageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *dragIdentifier;
@property (readonly, nonatomic) NSObject<NSItemProviderWriting> *dragObject;
@property (readonly, nonatomic) UIView *dragPreviewView;
@property (copy, nonatomic) id *frameChangeBlock; // ivar: _frameChangeBlock
@property (nonatomic) NSUInteger frameIndex; // ivar: _frameIndex
@property (readonly, nonatomic) BOOL hasInterest;
@property (readonly, nonatomic) BOOL hasLoadedImage;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIImage *highQualityImage; // ivar: _highQualityImage
@property (copy, nonatomic) id *highQualityImageRequestCancelHandler; // ivar: _highQualityImageRequestCancelHandler
@property (nonatomic) NSUInteger highQualityInterest; // ivar: _highQualityInterest
@property (readonly, nonatomic) SXImageResource *imageResource; // ivar: _imageResource
@property (nonatomic) NSUInteger intendedFrameIndex; // ivar: _intendedFrameIndex
@property (retain, nonatomic) NSMapTable *interestTable; // ivar: _interestTable
@property (nonatomic) BOOL isDecorative; // ivar: _isDecorative
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (nonatomic) NSInteger loadingIndicatorStyle;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSUInteger playCount; // ivar: _playCount
@property (nonatomic) CGSize preferredImageSize; // ivar: _preferredImageSize
@property (weak, nonatomic) UIImage *preferredQualityImage; // ivar: _preferredQualityImage
@property (copy, nonatomic) id *preferredQualityImageRequestCancelHandler; // ivar: _preferredQualityImageRequestCancelHandler
@property (nonatomic) NSUInteger preferredQualityInterest; // ivar: _preferredQualityInterest
@property (nonatomic) CGSize preferredQualityLoadingImageSize; // ivar: _preferredQualityLoadingImageSize
@property (readonly, nonatomic) BOOL prefersHighQuality;
@property (nonatomic) CGPoint previousPoint; // ivar: _previousPoint
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, weak, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (retain, nonatomic) UILongPressGestureRecognizer *scrubGesture; // ivar: _scrubGesture
@property (nonatomic) BOOL scrubbingEnabled; // ivar: _scrubbingEnabled
@property (nonatomic) BOOL shouldResume; // ivar: _shouldResume
@property (nonatomic) BOOL shouldResumeAfterLoad; // ivar: _shouldResumeAfterLoad
@property (nonatomic) BOOL shouldShowLoadingIndicator; // ivar: _shouldShowLoadingIndicator
@property (readonly) Class superclass;


-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)isAccessibilityElement;
-(BOOL)isVisible;
-(BOOL)objectHasQualityInterest:(id)arg0 quality:(*int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImageResource:(id)arg0 resourceDataSource:(id)arg1 reachabilityProvider:(id)arg2 ;
-(id)itemsForCustomRotor:(id)arg0 ;
-(id)stringForAXDragAction;
-(id)supportedCustomRotors;
-(struct CGSize )loadedImageSize;
-(void)addInterestInImageQuality:(int)arg0 forObject:(id)arg1 ;
-(void)animatedImage:(id)arg0 madeImageAvailableForFrameAtIndex:(NSUInteger)arg1 ;
-(void)crossfadeToImage:(id)arg0 ;
-(void)dealloc;
-(void)didEndDragging;
-(void)didLoadAnimatedImage:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)didReceiveMemoryWarning;
-(void)didStartDragging;
-(void)fadeInImageWhenVisible:(id)arg0 ;
-(void)giveUpInterestForObject:(id)arg0 ;
-(void)handleScrubGesture:(id)arg0 ;
-(void)layoutActivityIndicator;
-(void)layoutSubviews;
-(void)loadHighQualityImage;
-(void)loadPreferredQualityImage;
-(void)pause;
-(void)reachabilityChanged:(BOOL)arg0 ;
-(void)resume;
-(void)showNextFrame;
-(void)validateLoadedImage;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif