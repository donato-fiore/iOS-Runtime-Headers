// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSPOTLIGHTRESETOPERATION_H
#define PLSPOTLIGHTRESETOPERATION_H

@class NSString, CSSearchableIndex;


#import "PLSpotlightAsyncOperation.h"
#import "PLPhotoLibrary.h"

@interface PLSpotlightResetOperation : PLSpotlightAsyncOperation

@property (readonly, copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly, nonatomic) BOOL shouldForceSpotlightReindexForCurrentBundleIdentifier; // ivar: _shouldForceSpotlightReindexForCurrentBundleIdentifier


-(id)initWithPhotoLibrary:(id)arg0 spotlightSearchableIndex:(id)arg1 domainIdentifier:(id)arg2 shouldForceSpotlightReindexForCurrentBundleIdentifier:(BOOL)arg3 ;
-(void)_deleteSearchableItems:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)main;


@end


#endif