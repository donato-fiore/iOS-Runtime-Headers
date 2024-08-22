// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREEXTRACTORFACESFROMASSETAVERAGE_H
#define PGFEATUREEXTRACTORFACESFROMASSETAVERAGE_H

@class MAFeatureExtractor, NSString;


#import "PGFacesFromAssetFeatureExtractor.h"

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor

@property (readonly) MAFeatureExtractor *faceFeatureExtractor; // ivar: _faceFeatureExtractor
@property (readonly) NSString *name; // ivar: _name


-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 underlyingError:(id)arg3 ;
-(NSInteger)featureLength;
-(id)featureNames;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)floatVectorWithFaces:(id)arg0 error:(*id)arg1 ;
-(id)initWithFaceFeatureExtractor:(id)arg0 name:(id)arg1 ;


@end


#endif