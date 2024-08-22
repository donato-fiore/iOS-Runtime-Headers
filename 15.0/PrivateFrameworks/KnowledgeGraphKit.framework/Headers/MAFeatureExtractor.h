// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAFEATUREEXTRACTOR_H
#define MAFEATUREEXTRACTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MAFeatureExtractor : NSObject

@property (readonly, nonatomic) NSArray *featureNames;
@property (readonly, nonatomic) NSString *name;


-(id)defaultFloatVectorWithError:(*id)arg0 ;
-(id)featureVectorWithEntity:(id)arg0 error:(*id)arg1 ;
-(id)featureVectorsWithEntities:(id)arg0 entityLabels:(id)arg1 progressReporter:(id)arg2 error:(*id)arg3 ;
-(id)floatMatrixWithEntities:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(id)floatVectorWithEntity:(id)arg0 error:(*id)arg1 ;


@end


#endif