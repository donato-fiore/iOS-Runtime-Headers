// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSREALPORTRAITCONNECTOR_H
#define MAPSSUGGESTIONSREALPORTRAITCONNECTOR_H

@class PPLocationStore, PPConnectionsStore, PPNamedEntityStore, NSString;
@protocol MapsSuggestionsPortraitConnector;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealPortraitConnector : NSObject <MapsSuggestionsPortraitConnector>

 {
    PPLocationStore *_locationStore;
    PPConnectionsStore *_connectionsStore;
    PPNamedEntityStore *_namedEntityStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)iterRankedLocationsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRecentLocationsForConsumer:(NSUInteger)arg0 criteria:(id)arg1 limit:(NSUInteger)arg2 client:(id)arg3 error:(*id)arg4 block:(id)arg5 ;
-(id)init;
-(id)locationQuery:(NSUInteger)arg0 fromDate:(id)arg1 consumerType:(NSUInteger)arg2 ;
-(id)namedEntityQuery:(NSUInteger)arg0 fromDate:(id)arg1 consumerType:(NSUInteger)arg2 ;
-(id)rankedNamedEntitiesWihQuery:(id)arg0 error:(*id)arg1 ;
-(void)connectionsStore_registerFeedback:(id)arg0 clientIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)locationStore_registerFeedback:(id)arg0 clientIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)namedEntityStore_registerFeedback:(id)arg0 clientIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif