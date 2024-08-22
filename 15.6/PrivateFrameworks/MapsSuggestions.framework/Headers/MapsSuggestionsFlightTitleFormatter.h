// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSFLIGHTTITLEFORMATTER_H
#define MAPSSUGGESTIONSFLIGHTTITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsETATitleFormatter;


#import "MapsSuggestionsBaseTitleFormatter.h"

@interface MapsSuggestionsFlightTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETATitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 eta:(id)arg1 ;


@end


#endif