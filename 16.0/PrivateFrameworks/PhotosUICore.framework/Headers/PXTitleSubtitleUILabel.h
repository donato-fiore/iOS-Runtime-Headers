// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTITLESUBTITLEUILABEL_H
#define PXTITLESUBTITLEUILABEL_H

@class UIView, CALayer, NSString, NSArray;
@protocol PXChangeObserver;


#import "PXTitleSubtitleCALayerPromise.h"
#import "PXTitleSubtitleLabelSpec.h"

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver>

 {
    BOOL _needsUpdateLayerPromise;
}


@property (retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer; // ivar: __contentLayer
@property (retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise; // ivar: __layerPromise
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL diagnosticsEnabled; // ivar: _diagnosticsEnabled
@property (readonly, nonatomic) NSArray *diagnosticsRenderedLines;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastBaseline;
@property (nonatomic) BOOL rendersTextAsynchronously; // ivar: _rendersTextAsynchronously
@property (nonatomic) BOOL shouldRasterizeTextLayer; // ivar: _shouldRasterizeTextLayer
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) NSInteger typesettingMode; // ivar: _typesettingMode


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(void)_PXTitleSubtitleUILabelCommonInitialization;
-(void)_handleChangeFromBounds:(struct CGRect )arg0 ;
-(void)_invalidateLayerPromise;
-(void)_updateContentLayer;
-(void)_updateLayerPromiseIfNeeded;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif