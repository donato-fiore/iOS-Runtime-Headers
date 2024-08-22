// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRFEATURESTOREFILTERING_H
#define LRRFEATURESTOREFILTERING_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface LRRFeatureStoreFiltering : NSObject

@property (retain) NSNumber *deploymentID; // ivar: _deploymentID
@property (retain) NSString *experimentID; // ivar: _experimentID
@property (retain) NSString *treatmentID; // ivar: _treatmentID


-(BOOL)isKeyInUserDefaults:(id)arg0 ;
-(id)filterSamplesAndComputeTimestamps:(id)arg0 assetInfo:(id)arg1 ;
-(id)getTrialAssetInfo;
-(id)init:(id)arg0 deploymentID:(NSInteger)arg1 treatmentID:(id)arg2 ;
-(id)readUserDefaultAndFilterSamples;
-(void)manageDeploymentInfoForEvaluation;


@end


#endif