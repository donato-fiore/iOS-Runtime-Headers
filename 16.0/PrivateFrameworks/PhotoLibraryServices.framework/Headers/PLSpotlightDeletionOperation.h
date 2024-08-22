// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSPOTLIGHTDELETIONOPERATION_H
#define PLSPOTLIGHTDELETIONOPERATION_H

@class CSSearchableIndex, NSArray;


#import "PLSpotlightAsyncOperation.h"
#import "PLPhotoLibrary.h"

@interface PLSpotlightDeletionOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly, copy, nonatomic) NSArray *searchableItemIdentifiers; // ivar: _searchableItemIdentifiers


-(id)initWithPhotoLibrary:(id)arg0 spotlightSearchableIndex:(id)arg1 searchableItemIdentifiers:(id)arg2 ;
-(void)main;


@end


#endif