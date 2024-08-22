// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSSHORTCUTATMAPITEMDEDUPER_H
#define MAPSSUGGESTIONSSHORTCUTATMAPITEMDEDUPER_H

@class NSString;
@protocol MapsSuggestionsDeduper;


#import "MapsSuggestionsBaseDeduper.h"

@interface MapsSuggestionsShortcutAtMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>

 {
    vector<MapsSuggestionsEntryType, std::allocator<MapsSuggestionsEntryType>> _types;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)dedupeByEnrichingEntry:(id)arg0 withEntry:(id)arg1 ;
-(id)initWithSacrificedTypes:(*void)arg0 ;


@end


#endif