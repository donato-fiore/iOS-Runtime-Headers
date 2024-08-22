// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTORGRAPHRELATIONS_H
#define PGFEATUREEXTRACTORGRAPHRELATIONS_H

@class MAFeatureExtractor;


#import "PGAssetFeatureExtractor.h"
#import "PGGraph.h"

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor; // ivar: _featureExtractor
@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph


-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorWithMomentNodeCollection:(id)arg0 error:(*id)arg1 ;
-(id)initWithGraph:(id)arg0 featureExtractor:(id)arg1 ;
-(id)name;


@end


#endif