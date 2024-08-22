// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSEVENTCONTROLLER_H
#define FCSPORTSEVENTCONTROLLER_H

@class NSString, NSCache;
@protocol FCSportsEventsFetchOperationDelegate, FCJSONEncodableObjectProviding, FCNewsAppConfigurationManager, FCContentContext;

#import <Foundation/Foundation.h>

#import "FCSportsEventRecordSource.h"
#import "FCTagController.h"
#import "FCTagRecordSource.h"

@interface FCSportsEventController : NSObject <FCSportsEventsFetchOperationDelegate, FCJSONEncodableObjectProviding>



@property (retain, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCache *fastCache; // ivar: _fastCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCSportsEventRecordSource *sportsEventRecordSource; // ivar: _sportsEventRecordSource
@property (readonly) Class superclass;
@property (retain, nonatomic) FCTagController *tagController; // ivar: _tagController
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource; // ivar: _tagRecordSource


-(id)_cachedSportsEventForSportsEventID:(id)arg0 fastCacheOnly:(BOOL)arg1 ;
-(id)_cachedSportsEventsForSportsEventID:(id)arg0 fastCacheOnly:(BOOL)arg1 ;
-(id)_fetchOperationForSportsEventsWithIDs:(id)arg0 ;
-(id)fastCachedSportsEventForID:(id)arg0 ;
-(id)initWithContentDatabase:(id)arg0 context:(id)arg1 sportsEventRecordSource:(id)arg2 tagController:(id)arg3 ;
-(id)jsonEncodableObject;
-(id)slowCachedSportsEventForID:(id)arg0 ;
-(void)_fetchSportsEventForSportsEventID:(id)arg0 cachePolicy:(id)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_fetchSportsEventsForSportsEventIDs:(id)arg0 cachePolicy:(id)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_refreshSportsEventsBasedOnAgeForSportsEventIDs:(id)arg0 ;
-(void)_saveSportsEventsToCache:(id)arg0 ;
-(void)fetchSportsEventForSportsEventID:(id)arg0 cachePolicy:(id)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchSportsEventsForSportsEventIDs:(id)arg0 cachePolicy:(id)arg1 qualityOfService:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)sportsEventsFetchOperation:(id)arg0 didFetchSportsEvents:(id)arg1 ;


@end


#endif