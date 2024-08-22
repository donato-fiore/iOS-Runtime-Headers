// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPOTLIGHTDONATIONOPERATION_H
#define PLSPOTLIGHTDONATIONOPERATION_H

@class CSSearchableIndex, NSArray;
@protocol PLSpotlightDonationManagerSignpostDelegate;


#import "PLSpotlightAsyncOperation.h"
#import "PLPhotoLibrary.h"

@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly, copy, nonatomic) NSArray *searchableItems; // ivar: _searchableItems
@property (weak, nonatomic) NSObject<PLSpotlightDonationManagerSignpostDelegate> *signpostDelegate; // ivar: _signpostDelegate


-(id)initWithPhotoLibrary:(id)arg0 spotlightSearchableIndex:(id)arg1 searchableItems:(id)arg2 ;
-(void)main;


@end


#endif