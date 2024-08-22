// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPEXTENSIONDATASOURCE_H
#define FPEXTENSIONDATASOURCE_H

@class NSData, NSMutableDictionary, NSString;
@protocol FPXEnumeratorObserver, FPCollectionDataSource, FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing, FPCollectionDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "FPExtensionEnumerationSettings.h"

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource>

 {
    FPExtensionEnumerationSettings *_enumerationSettings;
    id<FPXEnumerator> *_enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    BOOL _shouldUpdate;
    BOOL _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    NSUInteger _numGatheredItems;
    id<FPDLifetimeServicing> *_lifetimeExtender;
    NSMutableDictionary *_oobBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPCollectionDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreIncoming; // ivar: _hasMoreIncoming
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)suggestedBatchSize;
+(NSInteger)suggestedPageSize;
+(void)setSuggestedBatchSize:(NSInteger)arg0 ;
+(void)setSuggestedPageSize:(NSInteger)arg0 ;
-(id)_initialPageFromSortDescriptors:(id)arg0 ;
-(id)initWithEnumerationSettings:(id)arg0 ;
-(void)_gatherInitialItems;
-(void)_gatherMoreItemsAfterPage:(id)arg0 section:(NSUInteger)arg1 ;
-(void)_invalidate;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_updateItems;
-(void)_updateItemsWithUpdatesCount:(NSUInteger)arg0 section:(NSUInteger)arg1 ;
-(void)didUpdateItem:(id)arg0 ;
-(void)enumerationMightHaveResumed;
-(void)enumerationResultsDidChange;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)start;


@end


#endif