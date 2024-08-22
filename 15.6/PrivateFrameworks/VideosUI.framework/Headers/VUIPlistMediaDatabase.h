// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLISTMEDIADATABASE_H
#define VUIPLISTMEDIADATABASE_H

@class NSArray, NSURL, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIPlistMediaDatabase : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseFileDispatchSource; // ivar: _databaseFileDispatchSource
@property (readonly, nonatomic) NSArray *episodes;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSMutableDictionary *homeVideoByIdentifier; // ivar: _homeVideoByIdentifier
@property (readonly, nonatomic) NSArray *homeVideos;
@property (retain, nonatomic) NSMutableDictionary *movieByIdentifier; // ivar: _movieByIdentifier
@property (retain, nonatomic) NSMutableDictionary *movieRentalByIdentifier; // ivar: _movieRentalByIdentifier
@property (readonly, nonatomic) NSArray *movieRentals;
@property (readonly, nonatomic) NSArray *movies;
@property (readonly, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // ivar: _serialDispatchQueue
@property (retain, nonatomic) NSMutableDictionary *showByIdentifier; // ivar: _showByIdentifier
@property (readonly, nonatomic) NSArray *shows;


+(id)_sortedEntitiesArray:(id)arg0 ;
+(void)_addItem:(id)arg0 itemByIdentifier:(id)arg1 ;
+(void)_removeItem:(id)arg0 itemByIdentifier:(id)arg1 ;
-(BOOL)_parseDatabase;
-(BOOL)_saveWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveToFileURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)entityForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)itemForIdentifier:(id)arg0 ;
-(void)_addEpisode:(id)arg0 showIdentifier:(id)arg1 seasonIdentifier:(id)arg2 ;
-(void)_addHomeVideo:(id)arg0 ;
-(void)_addMovie:(id)arg0 ;
-(void)_addMovieRental:(id)arg0 ;
-(void)_addSeason:(id)arg0 showIdentifier:(id)arg1 ;
-(void)_addShow:(id)arg0 ;
-(void)_parseDatabaseAndSendNotification;
-(void)_removeEntityWithIdentifier:(id)arg0 ;
-(void)_removeEpisode:(id)arg0 fromSeason:(id)arg1 ;
-(void)_removeHomeVideo:(id)arg0 ;
-(void)_removeMovie:(id)arg0 ;
-(void)_removeMovieRental:(id)arg0 ;
-(void)_removeSeason:(id)arg0 fromShow:(id)arg1 ;
-(void)_removeShow:(id)arg0 ;
-(void)_startMonitoringDatabaseFile;
-(void)addEntity:(id)arg0 showIdentifier:(id)arg1 seasonIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)removeDownloadedMediaForIdentifier:(id)arg0 ;
-(void)removeEntityWithIdentifier:(id)arg0 ;
-(void)updateEntity:(id)arg0 propertyName:(id)arg1 propertyValue:(id)arg2 ;
-(void)updateEntityWithIdentifier:(id)arg0 propertyName:(id)arg1 propertyValue:(id)arg2 ;


@end


#endif