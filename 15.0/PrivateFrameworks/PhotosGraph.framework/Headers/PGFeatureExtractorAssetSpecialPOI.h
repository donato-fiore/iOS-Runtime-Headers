// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREEXTRACTORASSETSPECIALPOI_H
#define PGFEATUREEXTRACTORASSETSPECIALPOI_H



#import "PGAssetFeatureExtractor.h"
#import "PGGraph.h"

@interface PGFeatureExtractorAssetSpecialPOI : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph


-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorWithMoment:(id)arg0 error:(*id)arg1 ;
-(id)initWithGraph:(id)arg0 ;
-(id)name;


@end


#endif