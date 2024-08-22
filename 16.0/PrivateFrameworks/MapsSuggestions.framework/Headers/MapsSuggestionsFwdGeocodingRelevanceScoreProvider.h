// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSFWDGEOCODINGRELEVANCESCOREPROVIDER_H
#define MAPSSUGGESTIONSFWDGEOCODINGRELEVANCESCOREPROVIDER_H

@class NSString;
@protocol MapsSuggestionsRelevanceScoreProvider, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider>

 {
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    id<MapsSuggestionsRelevanceScoreProvider> *_wrappedScoreProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)relevanceScoreForNames:(id)arg0 addresses:(id)arg1 mapItems:(id)arg2 completion:(id)arg3 ;
-(id)initDecoratingRelevanceScoreProvider:(id)arg0 networkRequester:(id)arg1 ;
-(void)preLoad;


@end


#endif