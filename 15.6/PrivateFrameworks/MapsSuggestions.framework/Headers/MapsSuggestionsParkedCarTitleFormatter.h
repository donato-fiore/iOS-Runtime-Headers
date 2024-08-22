// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSPARKEDCARTITLEFORMATTER_H
#define MAPSSUGGESTIONSPARKEDCARTITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsDistanceTitleFormatter;


#import "MapsSuggestionsBaseTitleFormatter.h"

@interface MapsSuggestionsParkedCarTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsDistanceTitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 distance:(CGFloat)arg1 trafficString:(id)arg2 ;


@end


#endif