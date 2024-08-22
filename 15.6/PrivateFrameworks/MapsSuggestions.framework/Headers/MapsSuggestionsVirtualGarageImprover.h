// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSVIRTUALGARAGEIMPROVER_H
#define MAPSSUGGESTIONSVIRTUALGARAGEIMPROVER_H

@class NSString;
@protocol MapsSuggestionsImprover;


#import "MapsSuggestionsBaseImprover.h"

@interface MapsSuggestionsVirtualGarageImprover : MapsSuggestionsBaseImprover <MapsSuggestionsImprover>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)improveEntry:(id)arg0 ;


@end


#endif