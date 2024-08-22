// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCLOUDKITWORKFLOW_H
#define WFCLOUDKITWORKFLOW_H

@class NSString, NSDate, CKRecordID, NSData, WFFileRepresentation;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFCloudKitWorkflow : NSObject <WFCloudKitItem>



@property (copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (retain, nonatomic) WFWorkflowRecord *cachedRecord; // ivar: _cachedRecord
@property (nonatomic) NSInteger cachedSyncHash; // ivar: _cachedSyncHash
@property (readonly, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *lastSavedOnDeviceName; // ivar: _lastSavedOnDeviceName
@property (readonly, nonatomic) NSDate *modifiedAt; // ivar: _modifiedAt
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (copy, nonatomic) NSData *serializedAccessResourcePerWorkflowStateData; // ivar: _serializedAccessResourcePerWorkflowStateData
@property (retain, nonatomic) WFFileRepresentation *serializedDataFile; // ivar: _serializedDataFile
@property (copy, nonatomic) NSData *serializedQuarantineData; // ivar: _serializedQuarantineData
@property (copy, nonatomic) NSData *serializedSmartPromptsPerWorkflowStateData; // ivar: _serializedSmartPromptsPerWorkflowStateData
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workflowSubtitle; // ivar: _workflowSubtitle


+(id)properties;
+(id)recordIDWithZoneID:(id)arg0 workflowID:(id)arg1 ;
+(id)recordType;
-(BOOL)isValidForSyncing;
-(id)initWithRecord:(id)arg0 identifier:(id)arg1 ;
-(id)recordRepresentationWithError:(*id)arg0 ;


@end


#endif