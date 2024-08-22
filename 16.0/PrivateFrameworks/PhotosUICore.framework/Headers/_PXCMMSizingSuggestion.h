// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXCMMSIZINGSUGGESTION_H
#define _PXCMMSIZINGSUGGESTION_H

@class NSString;
@protocol PXCMMSuggestion, PXPeopleFetchResult, PXDisplayAsset, PXUIImageProvider;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionActionManager.h"

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion>



@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<PXPeopleFetchResult> *peopleFetchResult; // ivar: _peopleFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(CGFloat)scoreForSuggestionMatchingType:(NSInteger)arg0 ;
-(id)contextForActivityType:(NSUInteger)arg0 sourceType:(NSUInteger)arg1 ;
-(id)diagnosticsItem;
-(id)init;
-(void)decline;
-(void)markAsActiveIfNeeded;
-(void)registerMatchingType:(NSInteger)arg0 ;


@end


#endif