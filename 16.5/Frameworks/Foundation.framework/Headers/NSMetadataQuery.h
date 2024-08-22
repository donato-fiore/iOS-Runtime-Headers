// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMETADATAQUERY_H
#define NSMETADATAQUERY_H

@class NSArray, NSDictionary;
@protocol NSMetadataQueryDelegate;

#import <Foundation/Foundation.h>

#import "NSOperationQueue.h"
#import "NSPredicate.h"

@interface NSMetadataQuery : NSObject {
    NSUInteger _flags;
    CGFloat _interval;
    id _private;
    *void _reserved;
}


@property NSObject<NSMetadataQueryDelegate> *delegate;
@property (readonly, getter=isGathering) BOOL gathering;
@property (readonly, copy) NSArray *groupedResults;
@property (copy) NSArray *groupingAttributes;
@property CGFloat notificationBatchingInterval;
@property (retain) NSOperationQueue *operationQueue;
@property (copy) NSPredicate *predicate;
@property (readonly) NSUInteger resultCount;
@property (readonly, copy) NSArray *results;
@property (copy) NSArray *searchItems;
@property (copy) NSArray *searchScopes;
@property (copy) NSArray *sortDescriptors;
@property (readonly, getter=isStarted) BOOL started;
@property (readonly, getter=isStopped) BOOL stopped;
@property (copy) NSArray *valueListAttributes;
@property (readonly, copy) NSDictionary *valueLists;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(Class)_stitchingClass;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg0 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg0 ;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg0 toURL:(id)arg1 ;
+(void)didEndPossibleFileOperation:(id)arg0 ;
-(BOOL)_canModifyQueryOrObserversInCurrentContext;
-(BOOL)_isMDQuery;
-(BOOL)startQuery;
-(NSUInteger)indexOfResult:(id)arg0 ;
-(id)_allAttributes;
-(id)_externalDocumentsBundleIdentifier;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg0 create:(BOOL)arg1 ;
-(id)_queryString;
-(id)_sortingAttributes;
-(id)init;
-(id)resultAtIndex:(NSUInteger)arg0 ;
-(id)searchItemURLs;
-(id)valueOfAttribute:(id)arg0 forResultAtIndex:(NSUInteger)arg1 ;
-(void)_disableAutoUpdates;
-(void)_enableAutoUpdates;
-(void)_inOriginalContextInvokeBlock:(id)arg0 ;
-(void)_noteNote1:(id)arg0 ;
-(void)_noteNote2:(id)arg0 ;
-(void)_noteNote3:(id)arg0 ;
-(void)_noteNote4:(id)arg0 ;
-(void)_noteNote5:(id)arg0 ;
-(void)_postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)_recreateQuery;
-(void)_resetQueryState;
-(void)_setBatchingParams;
-(void)_setExternalDocumentsBundleIdentifier:(id)arg0 ;
-(void)_update;
-(void)_validateInvocationContext;
-(void)_validatePredicate:(id)arg0 withScopes:(id)arg1 ;
-(void)_zapResultArrayIfIdenticalTo:(id)arg0 ;
-(void)dealloc;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)enumerateResultsUsingBlock:(id)arg0 ;
-(void)enumerateResultsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setSearchItemURLs:(id)arg0 ;
-(void)stopQuery;


@end


#endif