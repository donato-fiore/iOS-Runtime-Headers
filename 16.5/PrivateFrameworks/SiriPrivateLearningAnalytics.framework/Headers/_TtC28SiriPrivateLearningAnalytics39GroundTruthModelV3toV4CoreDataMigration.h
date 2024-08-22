// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICS39GROUNDTRUTHMODELV3TOV4COREDATAMIGRATION_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICS39GROUNDTRUTHMODELV3TOV4COREDATAMIGRATION_H

@class NSEntityMigrationPolicy;



@interface _TtC28SiriPrivateLearningAnalytics39GroundTruthModelV3toV4CoreDataMigration : NSEntityMigrationPolicy {
    ? messagesGroundTruthName;
    ? promptGroundTruthName;
    ? promptTaskAttribute;
    ? messagesSiriKitTaskName;
    ? suggestionOutcomeGroundTruthName;
    ? suggestionOutcomDomainAttribute;
    ? messagesDomainEnumValue;
}




-(BOOL)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif