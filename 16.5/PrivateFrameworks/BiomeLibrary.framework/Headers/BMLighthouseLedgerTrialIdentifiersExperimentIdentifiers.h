// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERTRIALIDENTIFIERSEXPERIMENTIDENTIFIERS_H
#define BMLIGHTHOUSELEDGERTRIALIDENTIFIERSEXPERIMENTIDENTIFIERS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trialDeploymentID; // ivar: _trialDeploymentID
@property (readonly, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (readonly, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTrialExperimentID:(id)arg0 trialDeploymentID:(id)arg1 trialTreatmentID:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif