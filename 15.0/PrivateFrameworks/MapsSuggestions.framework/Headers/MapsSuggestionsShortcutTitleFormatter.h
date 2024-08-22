// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSSHORTCUTTITLEFORMATTER_H
#define MAPSSUGGESTIONSSHORTCUTTITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsETATitleFormatter, MapsSuggestionsDistanceTitleFormatter;


#import "MapsSuggestionsBaseTitleFormatter.h"

@interface MapsSuggestionsShortcutTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETATitleFormatter, MapsSuggestionsDistanceTitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 distance:(CGFloat)arg1 trafficString:(id)arg2 ;
-(BOOL)formatTitlesForEntry:(id)arg0 eta:(id)arg1 ;


@end


#endif