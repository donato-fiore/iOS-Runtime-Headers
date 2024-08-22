// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFINDHEALTHSAMPLESACTION_H
#define WFFINDHEALTHSAMPLESACTION_H

@class WFContentItemFilterAction, NSString;



@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (readonly, nonatomic) NSString *readableSampleType;


-(BOOL)appResourceRequiresAppInstall;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)configurationData;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)generatedResourceNodes;
-(id)parameterDefinitions;
-(id)query;
-(id)sampleTypeName;
-(void)finishRunningWithError:(id)arg0 ;
-(void)finishRunningWithNoSamples;
-(void)initializeParameters;
-(void)resourceAvailabilityChanged;
-(void)updateParameterVisibility;
-(void)updateSourcesForSampleType:(id)arg0 ;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif