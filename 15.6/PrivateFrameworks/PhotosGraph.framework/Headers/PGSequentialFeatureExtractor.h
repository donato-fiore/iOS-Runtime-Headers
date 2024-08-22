// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEQUENTIALFEATUREEXTRACTOR_H
#define PGSEQUENTIALFEATUREEXTRACTOR_H

@class MAFeatureExtractor, NSArray;



@interface PGSequentialFeatureExtractor : MAFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor; // ivar: _featureExtractor
@property (readonly, nonatomic) NSArray *featureTransformers; // ivar: _featureTransformers


-(BOOL)_generateError:(*id)arg0 code:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
-(NSInteger)featureLength;
-(id)_transformFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithFeatureExtractor:(id)arg0 featureTransformers:(id)arg1 ;
-(id)name;


@end


#endif