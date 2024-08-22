// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMTRIMMERDEBUGVIEW_H
#define PMTRIMMERDEBUGVIEW_H

@class PHAsset, UILabel;
@protocol DebugDataSourceProtocol;


#import "PMPassthroughView.h"

@interface PMTrimmerDebugView : PMPassthroughView

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (weak, nonatomic) NSObject<DebugDataSourceProtocol> *debugDataSource; // ivar: _debugDataSource
@property (nonatomic) int duration; // ivar: _duration
@property (retain, nonatomic) UILabel *label; // ivar: _label


+(id)createViewAndAddToParentView:(id)arg0 ;
-(BOOL)isOverlapWithPreviousRangeForIndex:(NSUInteger)arg0 inRangeModels:(id)arg1 ;
-(id)_attributedStringWithColoredLabelsForKeys:(id)arg0 withRangeModelsByType:(id)arg1 ;
-(id)_rangeModelsByType:(id)arg0 ;
-(id)baseColorForMetadataRangeTypeKey:(id)arg0 ;
-(id)colorForMetadataRange:(id)arg0 ;
-(id)colorPatternForCameraMotionRange:(id)arg0 ;
-(id)colorPatternForFineActionRange:(id)arg0 ;
-(id)colorPatternForInterestingnessRange:(id)arg0 ;
-(id)colorPatternForQualityRange:(id)arg0 ;
-(id)colorPatternForRatingRange:(id)arg0 baseColor:(id)arg1 ;
-(id)colorWithPatternColors:(id)arg0 baseColor:(id)arg1 ;
-(void)_addAnalysisIndicators;
-(void)_addAutoEditScore:(id)arg0 lastLaneOfTypeOffset:(*CGFloat)arg1 ;
-(void)_addRangeLayerWithColor:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 ;
-(void)_addRangeLayerWithColor:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 width:(CGFloat)arg3 markEnds:(BOOL)arg4 ;
-(void)_resetRangeModelLayers;
-(void)addClipsToRanges:(id)arg0 ;
-(void)addSuggestionsToRanges:(id)arg0 ;
-(void)reloadRanges;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif