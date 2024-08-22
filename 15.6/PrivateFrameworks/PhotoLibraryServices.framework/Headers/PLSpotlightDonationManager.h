// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPOTLIGHTDONATIONMANAGER_H
#define PLSPOTLIGHTDONATIONMANAGER_H

@class NSString, NSOperationQueue, CSSearchableIndex;
@protocol PLSpotlightDonationManagerSignpostDelegate;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLSpotlightDonationManager : NSObject <PLSpotlightDonationManagerSignpostDelegate>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSString *searchIndexName; // ivar: _searchIndexName
@property (readonly, nonatomic) CSSearchableIndex *spotlightIndex; // ivar: _spotlightIndex
@property (readonly) Class superclass;


+(BOOL)isUniversalSearchEnabled;
-(id)initWithPhotoLibrary:(id)arg0 searchIndexName:(id)arg1 bundleIdentifier:(id)arg2 domainIdentifier:(id)arg3 ;
-(id)spotlightDonationManagerLog;
-(void)_signPostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 isBegin:(BOOL)arg2 ;
-(void)beginSignpostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 ;
-(void)deleteAllSearchableItems:(BOOL)arg0 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 ;
-(void)donateSearchableItems:(id)arg0 ;
-(void)endSignpostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 ;
-(void)setSpotlightOperationQueueSuspended:(BOOL)arg0 ;


@end


#endif