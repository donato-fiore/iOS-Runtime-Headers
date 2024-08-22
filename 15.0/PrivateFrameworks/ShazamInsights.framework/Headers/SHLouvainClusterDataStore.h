// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLOUVAINCLUSTERDATASTORE_H
#define SHLOUVAINCLUSTERDATASTORE_H

@class NSString, NSPersistentContainer;
@protocol SHDataStore;

#import <Foundation/Foundation.h>

#import "SHDataStoreMetadata.h"
#import "SHLouvainClusterQuery.h"

@interface SHLouvainClusterDataStore : NSObject <SHDataStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHDataStoreMetadata *metadata;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly, nonatomic) SHLouvainClusterQuery *query; // ivar: _query
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useInMemoryStore; // ivar: _useInMemoryStore


-(BOOL)isDataLoaded;
-(BOOL)loadClustersLineByLineFromDataURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveContextWithError:(*id)arg0 ;
-(id)initInMemoryStore;
-(void)removeAllData;


@end


#endif