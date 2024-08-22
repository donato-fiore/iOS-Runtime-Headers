// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENSTACKSUGGESTION_H
#define ATXHOMESCREENSTACKSUGGESTION_H

@class NSArray, NSString, NSSet, ATXInfoSuggestion, ATXProactiveSuggestion;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenWidgetIdentifiable.h"

@interface ATXHomeScreenStackSuggestion : NSObject {
    NSArray *_topWidgetSuggestions;
}


@property (readonly, nonatomic) BOOL isLowConfidenceStackRotationForStaleStack; // ivar: _isLowConfidenceStackRotationForStaleStack
@property (readonly, nonatomic) BOOL isTopWidgetSuggestionsWidget;
@property (readonly, nonatomic) NSString *stackId; // ivar: _stackId
@property (readonly, nonatomic) NSSet *suggestedWidgets; // ivar: _suggestedWidgets
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *topWidget; // ivar: _topWidget
@property (readonly, nonatomic) ATXInfoSuggestion *topWidgetInfoSuggestion;
@property (readonly, nonatomic) ATXProactiveSuggestion *topWidgetProactiveSuggestion;


+(NSUInteger)_stackLayoutSizeFromUILayoutType:(NSInteger)arg0 ;
+(id)_widgetAndSuggestionsFromSuggestionLayout:(id)arg0 ;
+(id)_widgetProactiveSuggestionFromLayout:(id)arg0 ;
+(id)_widgetsFromSuggestionLayouts:(id)arg0 ;
+(id)stackSuggestionsFromCachedSuggestions:(id)arg0 ;
+(id)widgetFromSuggestionLayout:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initForDebuggingWithStackIdentifier:(id)arg0 topWidget:(id)arg1 suggestedWidgets:(id)arg2 ;
-(id)initWithStackIdentifier:(id)arg0 layoutOfTopWidget:(id)arg1 layoutOfSuggestedWidgets:(id)arg2 ;


@end


#endif