// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTITLESUBTITLECALAYERPROMISE_H
#define PXTITLESUBTITLECALAYERPROMISE_H

@class NSString, NSArray;
@protocol PXMutableTitleSubtitleCALayerPromise, CALayerDelegate;


#import "PXCALayerPromise.h"
#import "PXTitleSubtitleLabelSpec.h"

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise, CALayerDelegate>



@property (readonly, nonatomic) CGFloat _textScaleFactor; // ivar: __textScaleFactor
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGFloat contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL diagnosticsEnabled; // ivar: _diagnosticsEnabled
@property (readonly, copy, nonatomic) NSArray *diagnosticsRenderedLines; // ivar: _diagnosticsRenderedLines
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect layerContentBounds; // ivar: _layerContentBounds
@property (readonly, nonatomic) CGFloat layerLastBaseline; // ivar: _layerLastBaseline
@property (nonatomic) BOOL rendersAsynchronously;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *spec; // ivar: _spec
@property (readonly, copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (readonly, nonatomic) NSInteger typesettingMode; // ivar: _typesettingMode


-(id)_attributedStringForLabelWithText:(id)arg0 spec:(id)arg1 ;
-(id)_linesToRenderWithContext:(struct CGContext *)arg0 ;
-(id)_stringByReplacingNonbreakableWhitespaceToAllowLineWrapping:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)createCustomLayer;
-(id)init;
-(void)drawLayerContentInContext:(struct CGContext *)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif