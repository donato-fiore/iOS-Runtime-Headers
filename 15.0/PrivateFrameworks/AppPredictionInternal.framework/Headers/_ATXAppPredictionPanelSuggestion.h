// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPPREDICTIONPANELSUGGESTION_H
#define _ATXAPPPREDICTIONPANELSUGGESTION_H

@class ATXCompositeLayoutWidgetSuggestionBase;



@interface _ATXAppPredictionPanelSuggestion : ATXCompositeLayoutWidgetSuggestionBase



-(BOOL)addSuggestion:(id)arg0 asMainSuggestion:(BOOL)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)containsIdenticalContentOfSuggestion:(id)arg0 ;
-(id)initForPreviewWithHyperParameters:(id)arg0 ;
-(id)initWithAppPredictionPanel:(id)arg0 containingStack:(id)arg1 suggestionDeduplicator:(id)arg2 hyperParameters:(id)arg3 ;
-(id)initWithAppPredictionPanel:(id)arg0 containingStack:(id)arg1 suggestionLayout:(id)arg2 suggestionDeduplicator:(id)arg3 hyperParameters:(id)arg4 ;


@end


#endif