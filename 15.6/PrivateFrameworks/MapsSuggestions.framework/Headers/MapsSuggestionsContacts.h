// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSCONTACTS_H
#define MAPSSUGGESTIONSCONTACTS_H

@class NSString;
@protocol MapsSuggestionsMeCardReader, MapsSuggestionsContactsConnector, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsLimitedDictionary.h"
#import "MapsSuggestionsObservers.h"
#import "MapsSuggestionsMeCard.h"
#import "MapsSuggestionsLocaleChangedTrigger.h"

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader>

 {
    Queue _queue;
    id<MapsSuggestionsContactsConnector> *_connector;
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    MapsSuggestionsLimitedDictionary *_cache;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currMeCard;
    MapsSuggestionsLocaleChangedTrigger *_localeChangedTrigger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)readMeCardAddressStringsWithHandler:(id)arg0 ;
-(char)readMeCardWithHandler:(id)arg0 ;
-(id)contactNameForIdentifier:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithConnector:(id)arg0 networkRequester:(id)arg1 ;
-(void)awaitQueue;
-(void)contactsDidUpdate;
-(void)dealloc;
-(void)registerMeCardObserver:(id)arg0 ;
-(void)unregisterMeCardObserver:(id)arg0 ;


@end


#endif