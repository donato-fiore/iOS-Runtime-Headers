// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSUGGESTIONSDATASOURCESTATE_H
#define PXCMMSUGGESTIONSDATASOURCESTATE_H

@class PHFetchResult, PHAssetCollection, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXCMMSuggestionsDataSourceContext.h"

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) PHFetchResult *assetCollections; // ivar: _assetCollections
@property (readonly, nonatomic) PHAssetCollection *confidentMatch; // ivar: _confidentMatch
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // ivar: _context
@property (readonly, nonatomic) NSDictionary *suggestionsByAssetCollectionObjectID; // ivar: _suggestionsByAssetCollectionObjectID


-(id)_confidentMatchUsingStrategy:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAssetCollections:(id)arg0 suggestionsByAssetCollectionObjectID:(id)arg1 context:(id)arg2 ;
-(id)stateUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;
-(void)_compareSuggestionsUsingContext;


@end


#endif