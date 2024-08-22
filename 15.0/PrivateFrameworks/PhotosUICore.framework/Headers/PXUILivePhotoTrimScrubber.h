// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUILIVEPHOTOTRIMSCRUBBER_H
#define PXUILIVEPHOTOTRIMSCRUBBER_H

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;


#import "PXLivePhotoTrimScrubber.h"

@interface PXUILivePhotoTrimScrubber : PXLivePhotoTrimScrubber <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator; // ivar: _impactGenerator
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // ivar: _longPressGesture
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture


+(id)_stretchableImageNamed:(id)arg0 withCapInsets:(struct UIEdgeInsets )arg1 ;
+(id)createSnappingControllerWithSnappingTarget:(CGFloat)arg0 ;
+(id)trimEndHighlightedImage;
+(id)trimEndHighlightedImageMini;
+(id)trimEndImage;
+(id)trimEndImageMini;
+(id)trimStartHighlightedImage;
+(id)trimStartHighlightedImageMini;
+(id)trimStartImage;
+(id)trimStartImageMini;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFilmStripViewClass:(Class)arg0 spec:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_PXUILivePhotoTrimScrubber_commonInit;
-(void)_handleBeginPanGesture:(id)arg0 ;
-(void)_handleChangePanGesture:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)impactOccured;
-(void)prepareForImpact;
-(void)setDisabled:(BOOL)arg0 ;


@end


#endif