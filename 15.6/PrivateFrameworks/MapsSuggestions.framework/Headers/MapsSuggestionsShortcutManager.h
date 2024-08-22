// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSSHORTCUTMANAGER_H
#define MAPSSUGGESTIONSSHORTCUTMANAGER_H

@class NSMutableArray, NSArray, NSString;
@protocol MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsRoutine.h"
#import "MapsSuggestionsContacts.h"
#import "MapsSuggestionsMeCard.h"
#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader>

 {
    Queue _queue;
    id<MapsSuggestionsShortcutStorage> *_storage;
    id<MapsSuggestionsShortcutSuggestor> *_suggestor;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    NSMutableArray *_hiddenShortcuts;
    MapsSuggestionsMeCard *_rawMeCard;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currCorrectedMeCard;
    NSArray *_rawHomeAddressStrings;
    NSArray *_rawWorkAddressStrings;
    NSArray *_rawSchoolAddressStrings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)addOrUpdateShortcuts:(id)arg0 handler:(id)arg1 ;
-(char)loadAllShortcutsWithHandler:(id)arg0 ;
-(char)moveShortcut:(id)arg0 afterShortcut:(id)arg1 handler:(id)arg2 ;
-(char)moveShortcut:(id)arg0 beforeShortcut:(id)arg1 handler:(id)arg2 ;
-(char)moveShortcut:(id)arg0 toIndex:(NSInteger)arg1 withSnapshot:(id)arg2 handler:(id)arg3 ;
-(char)moveShortcutToBack:(id)arg0 handler:(id)arg1 ;
-(char)moveShortcutToFront:(id)arg0 handler:(id)arg1 ;
-(char)proposeAdditionalShortcutsOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(char)readMeCardWithHandler:(id)arg0 ;
-(char)removeShortcuts:(id)arg0 handler:(id)arg1 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithStorage:(id)arg0 suggestor:(id)arg1 contacts:(id)arg2 routine:(id)arg3 ;
-(id)routine;
-(id)storage;
-(id)suggestor;
-(id)test_setUpPlaceholdersIfNeeded:(id)arg0 overlays:(id)arg1 ;
-(void)meCardReader:(id)arg0 didUpdateMeCard:(id)arg1 ;
-(void)registerMeCardObserver:(id)arg0 ;
-(void)test_sortMapsSuggestionsShortcuts:(id)arg0 ;
-(void)unregisterMeCardObserver:(id)arg0 ;


@end


#endif