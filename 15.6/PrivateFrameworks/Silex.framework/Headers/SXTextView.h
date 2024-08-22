// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTVIEW_H
#define SXTEXTVIEW_H

@class UIView, TSDCanvas, NSString, TSDLayoutController, CALayer, SXTextTangierFlowRep<SXTextTangierRepAccessibilityElement>;
@protocol SXTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, SXTextCanvasRenderSource, SXTextViewDelegate;


#import "SXTextTangierContainerInfo.h"
#import "SXTextLayouter.h"
#import "SXTextSource.h"

@interface SXTextView : UIView <SXTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, SXTextCanvasRenderSource>



@property (weak, nonatomic) TSDCanvas *canvas; // ivar: _canvas
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXTextViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frameInCanvas; // ivar: _frameInCanvas
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (readonly, nonatomic) TSDLayoutController *layoutController; // ivar: _layoutController
@property (nonatomic) BOOL mightBeVisuallyMisplaced; // ivar: _mightBeVisuallyMisplaced
@property (retain, nonatomic) CALayer *overlayContainerLayer; // ivar: _overlayContainerLayer
@property (nonatomic) CGRect parentFrame; // ivar: _parentFrame
@property (weak, nonatomic) SXTextTangierFlowRep<SXTextTangierRepAccessibilityElement> *rep; // ivar: _rep
@property (retain, nonatomic) CALayer *repContainerLayer; // ivar: _repContainerLayer
@property (nonatomic) BOOL shouldHyphenate; // ivar: _shouldHyphenate
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTextTangierContainerInfo *textInfo; // ivar: _textInfo
@property (retain, nonatomic) SXTextLayouter *textLayouter; // ivar: _textLayouter
@property (readonly, nonatomic) SXTextSource *textSource; // ivar: _textSource


-(BOOL)accessibilityRepIsSelectable:(id)arg0 ;
-(BOOL)isAccessibilityElement;
-(NSInteger)accessibilityContainerType;
-(id)accessibilityCustomRotorMembershipForRep:(id)arg0 ;
-(id)accessibilityElements;
-(id)accessibilityLabel;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)infoGeometry;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateOverlayTransform;
-(void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg0 forRep:(id)arg1 ;
-(void)directLayerHostUpdateOverlayLayers:(id)arg0 forRep:(id)arg1 ;
-(void)directLayerHostUpdateWithContainerLayer:(id)arg0 forRep:(id)arg1 ;
-(void)directLayerhostUpdateTopLevelTilingLayers:(id)arg0 forRep:(id)arg1 ;
-(void)invalidate;
-(void)provideInfosLayoutTo:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif