// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONPROMISE_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONPROMISE_H

@class NSDate, PHAssetCollection, NSString, NSArray;
@protocol PXSharedLibrarySharingSuggestion, _PXSharedLibrarySharingSuggestionContainer, NSCopying, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySharingSuggestionPromise : NSObject <PXSharedLibrarySharingSuggestion>



@property (readonly, nonatomic) NSDate *considerNewAfterDate; // ivar: _considerNewAfterDate
@property (readonly, nonatomic) NSObject<_PXSharedLibrarySharingSuggestionContainer> *container; // ivar: _container
@property (readonly, nonatomic) PHAssetCollection *containerCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) BOOL isNew; // ivar: _isNew
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) NSDate *suggestedDate; // ivar: _suggestedDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)isNewWithSuggestedDate:(id)arg0 considerNewAfterDate:(id)arg1 ;
-(id)copyIfNeededWithUpdatedConsiderNewAfterDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchAssetCollections;
-(id)init;
-(id)initWithContainer:(id)arg0 considerNewAfterDate:(id)arg1 lightweightPlaceholder:(BOOL)arg2 ;
-(void)_fulfill;
-(void)_loadLightweightProperties;
-(void)_updateIsNew;


@end


#endif