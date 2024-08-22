// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSSHORTCUTDEDUPER_H
#define MAPSSUGGESTIONSSHORTCUTDEDUPER_H

@class NSString;
@protocol MapsSuggestionsDeduper;


#import "MapsSuggestionsBaseDeduper.h"

@interface MapsSuggestionsShortcutDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)dedupeByEnrichingEntry:(id)arg0 withEntry:(id)arg1 ;


@end


#endif