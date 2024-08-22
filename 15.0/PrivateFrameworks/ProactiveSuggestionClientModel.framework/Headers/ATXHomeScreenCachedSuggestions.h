// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENCACHEDSUGGESTIONS_H
#define ATXHOMESCREENCACHEDSUGGESTIONS_H

@class NSDictionary, NSString, NSArray, NSUUID;
@protocol ATXUICacheProtocol;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenCachedSuggestions : NSObject <ATXUICacheProtocol>



@property (readonly, nonatomic) NSDictionary *cachedAppPredictionPanelLayouts; // ivar: _cachedAppPredictionPanelLayouts
@property (readonly, nonatomic) NSDictionary *cachedSuggestedWidgetsLayouts; // ivar: _cachedSuggestedWidgetsLayouts
@property (readonly, nonatomic) NSDictionary *cachedSuggestionWidgetLayouts; // ivar: _cachedSuggestionWidgetLayouts
@property (readonly, nonatomic) NSDictionary *cachedTopOfStackLayouts; // ivar: _cachedTopOfStackLayouts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fallbackSuggestions; // ivar: _fallbackSuggestions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_jsonRawDataForLayoutListMapping:(id)arg0 ;
-(id)_jsonRawDataForWidgetLayoutMapping:(id)arg0 ;
-(id)_layoutDictionaryWithKeys:(id)arg0 protoLayouts:(id)arg1 ;
-(id)_layoutListDictionaryWithKeys:(id)arg0 protoLayoutLists:(id)arg1 ;
-(id)_protoLayoutListsFromLayoutListDictionary:(id)arg0 orderedByKeys:(id)arg1 ;
-(id)_protoLayoutsFromLayoutDictionary:(id)arg0 orderedByKeys:(id)arg1 ;
-(id)allSuggestionsInCachedSuggestions;
-(id)compactDescription;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUUID:(id)arg0 suggestionWidgetLayouts:(id)arg1 appPredictionPanelLayouts:(id)arg2 topOfStackLayouts:(id)arg3 suggestedWidgetLayouts:(id)arg4 fallbackSuggestions:(id)arg5 ;
-(id)jsonRawData;
-(id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
-(id)proto;
-(id)protoForBiome;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif