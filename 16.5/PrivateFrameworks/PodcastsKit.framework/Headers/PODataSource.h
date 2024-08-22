// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PODATASOURCE_H
#define PODATASOURCE_H

@class NSString, NSURL, NSMutableDictionary, NSDate, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PODataSource : NSObject

@property BOOL constructingData; // ivar: _constructingData
@property (retain) NSString *databaseUUID; // ivar: _databaseUUID
@property (retain) NSString *firstRevisionUUID; // ivar: _firstRevisionUUID
@property (retain, nonatomic) NSURL *plistBasePath; // ivar: _plistBasePath
@property (retain, nonatomic) NSMutableDictionary *podcastCollectionsByUUID; // ivar: _podcastCollectionsByUUID
@property (retain) NSDate *podcastDataPlistLastModified; // ivar: _podcastDataPlistLastModified
@property (retain, nonatomic) NSMutableArray *podcastRevisions; // ivar: _podcastRevisions
@property (retain, nonatomic) NSMutableDictionary *podcastStationsByUUID; // ivar: _podcastStationsByUUID
@property (retain) NSDate *revisionsDataPlistLastModified; // ivar: _revisionsDataPlistLastModified


+(id)sharedInstance;
-(BOOL)isPodcastDataStale;
-(BOOL)isPodcastRevisionDataStale;
-(BOOL)isPodcastsInstalled;
-(id)arrayFromPlistURL:(id)arg0 ;
-(id)constructModelObjectOfClass:(Class)arg0 fromDictionary:(id)arg1 ;
-(id)constructModelObjectsFromDictionaries:(id)arg0 withIndexPath:(id)arg1 modelObjectClass:(Class)arg2 ;
-(id)description;
-(id)domainObjectWithUUID:(id)arg0 ;
-(id)init;
-(id)initWithPlistPath:(id)arg0 ;
-(id)podcastCollectionWithUUID:(id)arg0 ;
-(id)podcastCollections;
-(id)podcastCollectionsMatchingString:(id)arg0 maxResults:(NSInteger)arg1 ;
-(id)podcastModelObjectsInArray:(id)arg0 matchingString:(id)arg1 maxResults:(NSInteger)arg2 ;
-(id)podcastRevisionsSinceAnchor:(NSUInteger)arg0 ;
-(id)podcastStationWithUUID:(id)arg0 ;
-(id)podcastStations;
-(id)podcastStationsMatchingString:(id)arg0 maxResults:(NSInteger)arg1 ;
-(id)podcastsIndexPath;
-(id)validity;
-(void)_withExtensionParseDataDictionary:(id)arg0 revisionDictionary:(id)arg1 ;
-(void)constructRevisionFromDictionary:(id)arg0 isPodcastCollections:(BOOL)arg1 isDelete:(BOOL)arg2 ;
-(void)constructRevisionsFromDictionary:(id)arg0 isPodcastCollections:(BOOL)arg1 ;
-(void)getContainerURL:(id)arg0 ;
-(void)getDatabaseURL:(id)arg0 ;
-(void)getRevisionURL:(id)arg0 ;
-(void)getURLs:(id)arg0 ;
-(void)initializeDataFromDictionary;


@end


#endif