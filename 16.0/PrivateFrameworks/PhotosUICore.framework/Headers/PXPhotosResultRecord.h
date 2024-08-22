// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSRESULTRECORD_H
#define PXPHOTOSRESULTRECORD_H

@class PHFetchResult;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPhotosResultRecord : NSObject <NSCopying>



@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;


-(BOOL)ensureKeyAssetAtBeginning;
-(BOOL)isCurated;
-(BOOL)reverseSortOrder;
-(BOOL)wantsCuration;
-(NSInteger)keyAssetIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedFetchResult;
-(id)curatedOids;
-(id)curatedRefetchCondition:(SEL)arg0 ;
-(id)description;
-(id)excludedOids;
-(id)exposedFetchResult;
-(id)fetchResult;
-(id)filteredFetchResult;
-(id)includedOids;
-(id)inclusionPredicate;
-(id)keyAssetsFetchResult;


@end


#endif