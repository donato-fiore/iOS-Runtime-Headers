// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSEARCHQUERYDATASOURCE_H
#define FPSEARCHQUERYDATASOURCE_H

@protocol FPCollectionDataSource, FPSpotlightDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPSpotlightDataSource.h"
#import "FPExtensionDataSource.h"
#import "FPSearchQueryDescriptor.h"

@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    FPSpotlightDataSource *_spotlightDataSource;
    FPExtensionDataSource *_serverSearchDataSource;
}


@property (weak, nonatomic) NSObject<FPSpotlightDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (readonly) NSUInteger lastForcedUpdate;
@property (readonly, nonatomic) FPSearchQueryDescriptor *queryDescriptor; // ivar: _queryDescriptor


-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg0 ;
-(id)initWithQueryDescriptor:(id)arg0 predicate:(id)arg1 ;
-(void)dataSource:(id)arg0 didChangeItemsOrigin:(NSUInteger)arg1 ;
-(void)dataSource:(id)arg0 receivedUpdatedItems:(id)arg1 deletedItems:(id)arg2 hasMoreChanges:(BOOL)arg3 ;
-(void)dataSource:(id)arg0 replaceContentsWithItems:(id)arg1 hasMoreChanges:(BOOL)arg2 ;
-(void)dataSource:(id)arg0 wasInvalidatedWithError:(id)arg1 ;
-(void)enumerationMightHaveResumed;
-(void)invalidate;
-(void)start;


@end


#endif