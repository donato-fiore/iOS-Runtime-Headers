// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTRIALCLIENTWRAPPER_H
#define ATXTRIALCLIENTWRAPPER_H

@class TRIClient, NSString, TRIRolloutIdentifiers;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>


@interface ATXTrialClientWrapper : NSObject {
    id<TRINotificationToken> *_token;
}


@property (readonly, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (readonly, nonatomic) int trialDeploymentId; // ivar: _trialDeploymentId
@property (readonly, nonatomic) NSString *trialExperimentId; // ivar: _trialExperimentId
@property (readonly, nonatomic) NSString *trialNamespaceName; // ivar: _trialNamespaceName
@property (readonly, nonatomic) TRIRolloutIdentifiers *trialRolloutIdentifiers; // ivar: _trialRolloutIdentifiers
@property (readonly, nonatomic) NSString *trialTreatmentId; // ivar: _trialTreatmentId


-(BOOL)refreshEnrollmentInformation;
-(BOOL)refreshRolloutIdentifiers;
-(id)dictionaryForTrialResource:(id)arg0 ;
-(id)filePathForTrialResource:(id)arg0 ;
-(id)initWithClientIdentifier:(int)arg0 namespaceName:(id)arg1 ;
-(void)updateFactors;


@end


#endif