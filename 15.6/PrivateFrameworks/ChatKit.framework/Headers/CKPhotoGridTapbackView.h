// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHOTOGRIDTAPBACKVIEW_H
#define CKPHOTOGRIDTAPBACKVIEW_H

@class UIView, NSString, PXAssetReference;
@protocol PXGDecorationView, CKGradientReferenceView;


#import "CKAggregateAcknowledgmentBalloonView.h"

@interface CKPhotoGridTapbackView : UIView <PXGDecorationView, CKGradientReferenceView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decorationOptions; // ivar: _decorationOptions
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsAnimation; // ivar: _needsAnimation
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (retain, nonatomic) CKAggregateAcknowledgmentBalloonView *tapbackBalloonView; // ivar: _tapbackBalloonView
@property (copy, nonatomic) PXAssetReference *userData; // ivar: _userData


-(BOOL)invertTail;
-(BOOL)isFromMe;
-(BOOL)shouldAnimate;
-(Class)balloonViewClass;
-(id)_imAggregateAcknowledgmentChatItem;
-(id)asset;
-(id)gradientReferenceView;
-(struct CGRect )gradientFrame;
-(void)_setupBalloonView;
-(void)_tearDownBalloonView;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)performInsertion:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif