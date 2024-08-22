// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSRESUMEROUTETITLEFORMATTER_H
#define MAPSSUGGESTIONSRESUMEROUTETITLEFORMATTER_H

@class NSString;
@protocol MapsSuggestionsETAChargeTitleFormatter;


#import "MapsSuggestionsBaseTitleFormatter.h"

@interface MapsSuggestionsResumeRouteTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETAChargeTitleFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)formatTitlesForEntry:(id)arg0 eta:(id)arg1 requiredChargeLevel:(id)arg2 currentChargeLevel:(id)arg3 ;


@end


#endif