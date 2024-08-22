// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMININGTASKCONFIG_H
#define BMMININGTASKCONFIG_H

@class NSDictionary, NSString, TRIClient, TRITrackingId;

#import <Foundation/Foundation.h>


@interface BMMiningTaskConfig : NSObject

@property (retain) NSDictionary *bmMiningTaskConfig; // ivar: _bmMiningTaskConfig
@property (nonatomic) int deploymentID; // ivar: _deploymentID
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse; // ivar: _interactionExtractedTopicFromAttachmentFactorInUse
@property (retain, nonatomic) NSString *treatmentID; // ivar: _treatmentID
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (retain, nonatomic) NSString *trialID; // ivar: _trialID
@property (retain, nonatomic) TRITrackingId *trialTrackingID; // ivar: _trialTrackingID


-(BOOL)loadBMMiningTaskConfig:(id)arg0 ;
-(id)init;
-(void)loadDefaultConfig;
-(void)registerWithTrial;
-(void)updateFactorLevels;
-(void)updateFactorLevelsFromFilePath:(id)arg0 ;


@end


#endif