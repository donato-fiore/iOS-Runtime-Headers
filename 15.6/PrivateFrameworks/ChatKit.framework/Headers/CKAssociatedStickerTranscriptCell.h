// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASSOCIATEDSTICKERTRANSCRIPTCELL_H
#define CKASSOCIATEDSTICKERTRANSCRIPTCELL_H

@class NSString, NSArray, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CKAnimationTimerObserver;


#import "CKAssociatedMessageTranscriptCell.h"
#import "CKAnimatedImage.h"
#import "CKBalloonImageView.h"

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver>



@property (retain, nonatomic) CKAnimatedImage *animatedImage; // ivar: _animatedImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) CKBalloonImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(CGFloat)associatedStickerXOriginForStickerFrame:(struct CGRect )arg0 parentSize:(struct CGSize )arg1 contentAlignmentRect:(struct CGRect )arg2 orientation:(char)arg3 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor )arg4 outBalloonOffset:(*CGFloat)arg5 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)doubleTapGestureRecognized:(id)arg0 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForDrawer;
-(void)longPressGestureRecognized:(id)arg0 ;
-(void)performHide:(id)arg0 ;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)performReveal:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateAnimationTimerObserving;


@end


#endif