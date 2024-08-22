// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSCARRENTALTITLEFORMATTER_H
#define MAPSSUGGESTIONSCARRENTALTITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsETATitleFormatter;


#import "MapsSuggestionsEventETATitleFormatter.h"

@interface MapsSuggestionsCarRentalTitleFormatter : MapsSuggestionsEventETATitleFormatter <MapsSuggestionsETATitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 eta:(id)arg1 ;


@end


#endif