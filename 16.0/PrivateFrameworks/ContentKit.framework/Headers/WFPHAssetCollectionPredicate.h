// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPHASSETCOLLECTIONPREDICATE_H
#define WFPHASSETCOLLECTIONPREDICATE_H

@class NSComparisonPredicate, PHAssetCollection;



@interface WFPHAssetCollectionPredicate : NSComparisonPredicate

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection


-(id)initForAssetsInCollection:(id)arg0 ;
-(id)wf_photoLibraryFilteringPredicate;


@end


#endif