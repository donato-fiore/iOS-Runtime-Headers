// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSHOMEWORKTITLEFORMATTER_H
#define MAPSSUGGESTIONSHOMEWORKTITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsETATitleFormatter;


#import "MapsSuggestionsBaseTitleFormatter.h"

@interface MapsSuggestionsHomeWorkTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETATitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 eta:(id)arg1 ;


@end


#endif