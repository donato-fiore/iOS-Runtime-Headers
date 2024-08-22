// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOREDATAWORKFLOW_H
#define WFCOREDATAWORKFLOW_H

@class NSManagedObject, NSSet, NSString, NSData, NSDate, NSArray, NSDictionary;
@protocol WFRecordStorage;


#import "WFCoreDataWorkflowActions.h"
#import "WFCoreDataWorkflow.h"
#import "WFCoreDataWorkflowIcon.h"
#import "WFCoreDataWorkflowQuarantine.h"
#import "WFWorkflowIcon.h"
#import "WFWorkflowQuarantine.h"

@interface WFCoreDataWorkflow : NSManagedObject <WFRecordStorage>



@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (retain, nonatomic) NSSet *accessResourcePermissions;
@property (nonatomic) NSInteger actionCount;
@property (retain, nonatomic) WFCoreDataWorkflowActions *actions;
@property (copy, nonatomic) NSString *actionsDescription;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) NSData *cloudKitRecordMetadata;
@property (retain, nonatomic) WFCoreDataWorkflow *conflictOf;
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property (retain, nonatomic) NSSet *conflicts;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *deserializedActions;
@property (copy, nonatomic) NSArray *deserializedImportQuestions;
@property (copy, nonatomic) NSArray *deserializedInputClasses;
@property (copy, nonatomic) NSDictionary *deserializedNoInputBehavior;
@property (copy, nonatomic) NSArray *deserializedOutputClasses;
@property (readonly, nonatomic) NSUInteger estimatedSize;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (nonatomic) BOOL hasOutputFallback;
@property (nonatomic) BOOL hasShortcutInputVariables;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hiddenFromLibraryAndSync;
@property (nonatomic) BOOL hiddenFromWidget;
@property (retain, nonatomic) WFCoreDataWorkflowIcon *icon;
@property (retain, nonatomic) NSData *importQuestionsData;
@property (retain, nonatomic) NSData *inputClassesData;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSDate *lastRunEventDate;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (nonatomic) NSInteger lastSyncedHash;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *noInputBehaviorData;
@property (retain, nonatomic) NSData *outputClassesData;
@property (retain, nonatomic) NSSet *parents;
@property (copy, nonatomic) NSString *phrase;
@property (retain, nonatomic) WFCoreDataWorkflowQuarantine *quarantine;
@property (nonatomic) BOOL receivesOnScreenContent;
@property (nonatomic) BOOL receivesOnScreenContent;
@property (nonatomic) NSInteger remoteQuarantineStatus;
@property (nonatomic) int remoteQuarantineStatusValue;
@property (retain, nonatomic) NSSet *runEvents;
@property (readonly, nonatomic) NSInteger runEventsCount;
@property (copy, nonatomic) NSSet *smartPromptPerWorkflowStates;
@property (retain, nonatomic) NSSet *smartPromptPermissions;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncHash;
@property (nonatomic) BOOL tombstoned;
@property (readonly, nonatomic) NSInteger triggerCount;
@property (retain, nonatomic) NSSet *triggers;
@property (retain, nonatomic) NSSet *trustedDomains;
@property (copy, nonatomic) NSString *workflowID;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (retain, nonatomic) NSArray *workflowTypes;


+(id)descriptorFetchRequest;
+(id)fetchRequest;
+(id)recordPropertyMap;
-(NSInteger)computedSyncHash;
-(id)descriptor;
-(id)identifier;
-(void)didUpdateProperties:(id)arg0 ;


@end


#endif