// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MARELATIONCOLLECTIONFEATUREEXTRACTOR_H
#define MARELATIONCOLLECTIONFEATUREEXTRACTOR_H

@class NSString;


#import "MAFeatureExtractor.h"
#import "MAIndexCache.h"
#import "MARelation.h"

@interface MARelationCollectionFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
}


@property (readonly, nonatomic) MAIndexCache *featureNameIndexCache; // ivar: _featureNameIndexCache
@property (readonly, nonatomic) id *labelForTargetBlock; // ivar: _labelForTargetBlock
@property (readonly, nonatomic) MARelation *relation; // ivar: _relation


-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)initWithName:(id)arg0 featureNames:(id)arg1 relation:(id)arg2 labelForTargetBlock:(id)arg3 ;
-(id)name;


@end


#endif