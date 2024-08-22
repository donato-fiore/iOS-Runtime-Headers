// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIAGNOSTICCASESTORAGE_H
#define DIAGNOSTICCASESTORAGE_H

@class NSManagedObject, NSString, NSDate;


#import "UploadRecord.h"

@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic) BOOL attachmentsIncomplete;
@property (retain, nonatomic) NSString *buildVariant;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *caseAttachments;
@property (retain, nonatomic) NSDate *caseClosedTime;
@property (nonatomic) short caseClosureType;
@property (retain, nonatomic) NSString *caseContext;
@property (nonatomic) short caseDampeningType;
@property (retain, nonatomic) NSString *caseDetectedProcess;
@property (retain, nonatomic) NSString *caseDomain;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (retain, nonatomic) NSString *caseEvents;
@property (retain, nonatomic) NSString *caseGroupID;
@property (retain, nonatomic) NSString *caseID;
@property (retain, nonatomic) NSString *caseObjectVersion;
@property (retain, nonatomic) NSString *casePayloads;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (nonatomic) short caseState;
@property (retain, nonatomic) NSString *caseSubtype;
@property (retain, nonatomic) NSString *caseSubtypeContext;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (retain, nonatomic) NSString *caseType;
@property (nonatomic) BOOL remoteTrigger;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) UploadRecord *uploadRecord;
@property (nonatomic) short uploadState;




@end


#endif