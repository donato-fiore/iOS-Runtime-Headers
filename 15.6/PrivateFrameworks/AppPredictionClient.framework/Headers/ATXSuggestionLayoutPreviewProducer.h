// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSUGGESTIONLAYOUTPREVIEWPRODUCER_H
#define ATXSUGGESTIONLAYOUTPREVIEWPRODUCER_H


#import <Foundation/Foundation.h>


@interface ATXSuggestionLayoutPreviewProducer : NSObject



+(id)_clientModelSpecForPreview;
+(id)_executableSpecForAppPredictionWithBundleId:(id)arg0 ;
+(id)_proactiveSuggestionWithBundleId:(id)arg0 layoutType:(NSInteger)arg1 title:(id)arg2 ;
+(id)_scoreSpecForPreview;
+(id)_uiSpecForPreviewWithLayoutType:(NSInteger)arg0 title:(id)arg1 subtitle:(id)arg2 ;
+(id)previewLayoutFor2x2SuggestionWidget;
+(id)previewLayoutFor2x4SuggestionWidget;
+(id)previewLayoutFor4x4SuggestionWidget;
+(id)previewLayoutForAppPredictionPanel;


@end


#endif