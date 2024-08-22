// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSPORTRAIT_H
#define MAPSSUGGESTIONSPORTRAIT_H

@class PPConnectionsCriteria, NSString, GEOMapItemStorage, NSNumber;
@protocol MapsSuggestionsObject, MapsSuggestionsPortraitConnector, MapsSuggestionsNetworkRequester, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsContacts.h"

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject>

 {
    id<MapsSuggestionsPortraitConnector> *_connector;
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    PPConnectionsCriteria *_criteria;
    NSString *_cachedKey;
    GEOMapItemStorage *_cachedMapItem;
    NSNumber *_cachedMapItemOrigin;
    MapsSuggestionsContacts *_contacts;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)fetchConnectionEntriesWithHandler:(id)arg0 ;
-(BOOL)fetchLocationEntriesForTray:(BOOL)arg0 currentLocation:(id)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(id)fetchNamedEntitiesFromDate:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithPortraitConnector:(id)arg0 networkRequester:(id)arg1 contacts:(id)arg2 ;
-(void)sendFeedbackforClientID:(id)arg0 storeType:(NSInteger)arg1 explicitlyEngagedStrings:(id)arg2 explicitlyRejectedStrings:(id)arg3 implicitlyEngagedStrings:(id)arg4 implicitlyRejectedStrings:(id)arg5 ;


@end


#endif