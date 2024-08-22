// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPAPPLIBRARYCOLLECTIONDATASOURCE_H
#define FPAPPLIBRARYCOLLECTIONDATASOURCE_H

@class NSMutableDictionary, NSFileCoordinator;
@protocol FPCollectionDataSourceDelegate, FPCollectionDataSource, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FPAppLibraryCollectionDataSource : NSObject <FPCollectionDataSourceDelegate, FPCollectionDataSource>

 {
    NSObject<OS_dispatch_group> *_dispatch_group;
}


@property (retain, nonatomic) NSMutableDictionary *containerItemIDToAppLibraryItemIDMap; // ivar: _containerItemIDToAppLibraryItemIDMap
@property (retain, nonatomic) NSObject<FPCollectionDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<FPCollectionDataSourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSFileCoordinator *fileCoordinator; // ivar: _fileCoordinator
@property (nonatomic) BOOL hasMoreIncoming; // ivar: _hasMoreIncoming
@property (readonly) NSUInteger lastForcedUpdate; // ivar: _lastForcedUpdate


-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg0 ;
-(id)dispatchGroup;
-(id)extensionDataSource;
-(id)initWithSettings:(id)arg0 ;
-(void)dataSource:(id)arg0 receivedUpdatedItems:(id)arg1 deletedItems:(id)arg2 hasMoreChanges:(BOOL)arg3 ;
-(void)dataSource:(id)arg0 replaceContentsWithItems:(id)arg1 hasMoreChanges:(BOOL)arg2 ;
-(void)dataSource:(id)arg0 wasInvalidatedWithError:(id)arg1 ;
-(void)enumerationMightHaveResumed;
-(void)invalidate;
-(void)start;


@end


#endif