// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSPORTRAITRELEVANCESCOREPROVIDER_H
#define MAPSSUGGESTIONSPORTRAITRELEVANCESCOREPROVIDER_H

@class NSDate, NSArray, NSLocale, NSString;
@protocol MapsSuggestionsRelevanceScoreProvider;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsPortrait.h"

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider>

 {
    NSDate *_fetchEntriesFromDate;
    NSArray *_portraitData;
    Queue _queue;
    NSLocale *_currentLocale;
    NSString *_languageCode;
    NSString *_currentCountryCode;
    MapsSuggestionsPortrait *_portrait;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)relevanceScoreForNames:(id)arg0 addresses:(id)arg1 mapItems:(id)arg2 completion:(id)arg3 ;
-(id)initWithPortrait:(id)arg0 ;
-(void)preLoad;


@end


#endif