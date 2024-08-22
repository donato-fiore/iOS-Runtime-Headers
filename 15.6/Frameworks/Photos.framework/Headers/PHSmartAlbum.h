// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHSMARTALBUM_H
#define PHSMARTALBUM_H



#import "PHAssetCollection.h"

@interface PHSmartAlbum : PHAssetCollection



+(id)_collectionSubtypeExpressionForFetchRequests;
+(id)albumKindFromSmartAlbumSubtype:(NSInteger)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)managedEntityName;
-(BOOL)collectionHasFixedOrder;


@end


#endif