// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICCASESUMMARY_H
#define DIAGNOSTICCASESUMMARY_H

@class NSManagedObject, NSString, NSDate;



@interface DiagnosticCaseSummary : NSManagedObject

@property (retain, nonatomic) NSString *buildVariant;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *caseAttachments;
@property (retain, nonatomic) NSDate *caseClosedTime;
@property (nonatomic) short caseClosureType;
@property (retain, nonatomic) NSString *caseContext;
@property (retain, nonatomic) NSDate *caseCreatedTime;
@property (nonatomic) short caseDampeningType;
@property (retain, nonatomic) NSString *caseDetectedProcess;
@property (retain, nonatomic) NSString *caseDomain;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (retain, nonatomic) NSString *caseGroupID;
@property (retain, nonatomic) NSString *caseID;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (retain, nonatomic) NSString *caseSubtype;
@property (retain, nonatomic) NSString *caseSubtypeContext;
@property (nonatomic) short caseSummaryState;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (retain, nonatomic) NSString *caseType;
@property (nonatomic) BOOL remoteTrigger;




@end


#endif