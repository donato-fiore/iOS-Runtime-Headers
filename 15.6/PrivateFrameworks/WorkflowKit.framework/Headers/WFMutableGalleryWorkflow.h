// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMUTABLEGALLERYWORKFLOW_H
#define WFMUTABLEGALLERYWORKFLOW_H

@class CKRecordID, NSDate, NSArray, WFFileRepresentation, NSString, NSNumber;


#import "WFGalleryWorkflow.h"
#import "WFWorkflowIcon.h"
#import "WFWorkflowRecord.h"

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow

@property (retain, nonatomic) CKRecordID *base; // ivar: base
@property (retain, nonatomic) NSDate *createdAt; // ivar: createdAt
@property (copy, nonatomic) NSArray *hiddenRegions; // ivar: hiddenRegions
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) WFFileRepresentation *iconFile; // ivar: iconFile
@property (copy, nonatomic) CKRecordID *identifier; // ivar: identifier
@property (copy, nonatomic) NSString *language; // ivar: language
@property (copy, nonatomic) NSString *longDescription; // ivar: longDescription
@property (nonatomic) NSInteger minVersion; // ivar: minVersion
@property (retain, nonatomic) NSDate *modifiedAt; // ivar: modifiedAt
@property (copy, nonatomic) NSString *name; // ivar: name
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (retain, nonatomic) NSNumber *searchable; // ivar: searchable
@property (copy, nonatomic) NSString *shortDescription; // ivar: shortDescription
@property (retain, nonatomic) WFFileRepresentation *shortcutFile; // ivar: shortcutFile
@property (copy, nonatomic) NSArray *supportedIdioms; // ivar: supportedIdioms
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: workflowRecord




@end


#endif