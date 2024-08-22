// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREALMWORKFLOW_H
#define WFREALMWORKFLOW_H

@class NSSet, NSArray, NSData, NSString, NSDate, RLMArray<WFWorkflowInputClass>, NSNumber, RLMArray<WFWorkflowType>;
@protocol WFRecordStorage;


#import "RLMObject.h"
#import "WFRealmWorkflow.h"
#import "RLMLinkingObjects.h"
#import "WFRealmWorkflowIcon.h"
#import "WFRealmWorkflowQuarantine.h"
#import "WFWorkflowTrustedResources.h"
#import "WFWorkflowIcon.h"
#import "WFWorkflowQuarantine.h"

@interface WFRealmWorkflow : RLMObject <WFRecordStorage>



@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property (copy, nonatomic) NSArray *actions;
@property (copy) NSData *actionsData; // ivar: _actionsData
@property (copy) NSString *actionsDescription; // ivar: _actionsDescription
@property (copy) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (copy) NSData *cloudKitRecordMetadata; // ivar: _cloudKitRecordMetadata
@property (retain) WFRealmWorkflow *conflictOf; // ivar: _conflictOf
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow;
@property (readonly) RLMLinkingObjects *conflictingWorkflows; // ivar: _conflictingWorkflows
@property (retain) NSDate *createdAt; // ivar: _createdAt
@property (readonly, copy) NSString *debugDescription;
@property BOOL deleted; // ivar: _deleted
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger estimatedSize;
@property (copy) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (readonly) NSUInteger hash;
@property BOOL hiddenFromLibraryAndSync; // ivar: _hiddenFromLibraryAndSync
@property (getter=isHiddenInComplication) BOOL hiddenInComplication; // ivar: _hiddenInComplication
@property (retain) WFRealmWorkflowIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy) NSData *importQuestionsData; // ivar: _importQuestionsData
@property (retain) RLMArray<WFWorkflowInputClass> *inputClassContainers; // ivar: _inputClassContainers
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy) NSString *lastMigratedClientVersion; // ivar: _lastMigratedClientVersion
@property (copy) NSString *lastSavedOnDeviceName; // ivar: _lastSavedOnDeviceName
@property NSInteger lastSyncedHash; // ivar: _lastSyncedHash
@property (copy) NSString *legacyName; // ivar: _legacyName
@property (readonly, nonatomic) NSNumber *location; // ivar: _location
@property (copy) NSString *minimumClientVersion; // ivar: _minimumClientVersion
@property (retain) NSDate *modifiedAt; // ivar: _modifiedAt
@property (copy) NSString *name; // ivar: _name
@property (retain) WFRealmWorkflowQuarantine *quarantine; // ivar: _quarantine
@property NSInteger remoteQuarantineStatus; // ivar: _remoteQuarantineStatus
@property NSInteger sortOrdering; // ivar: _sortOrdering
@property (copy) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain) WFWorkflowTrustedResources *trustedResources; // ivar: _trustedResources
@property (copy) NSString *workflowID; // ivar: _workflowID
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property (copy) NSString *workflowSubtitle; // ivar: _workflowSubtitle
@property (retain) RLMArray<WFWorkflowType> *workflowTypeContainers; // ivar: _workflowTypeContainers
@property (copy, nonatomic) NSArray *workflowTypes;


+(id)className;
+(id)defaultPropertyValues;
+(id)ignoredProperties;
+(id)linkingObjectsProperties;
+(id)primaryKey;
+(id)recordPropertyMap;
+(id)requiredProperties;
-(id)descriptor;
-(id)identifier;


@end


#endif