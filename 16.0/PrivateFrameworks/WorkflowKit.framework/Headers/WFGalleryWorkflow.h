// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGALLERYWORKFLOW_H
#define WFGALLERYWORKFLOW_H

@class CKRecordID, NSDate, NSString, NSArray, WFWorkflowIcon, NSNumber, WFFileRepresentation, NSData;
@protocol WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFGalleryWorkflow : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>



@property (readonly, nonatomic) CKRecordID *base; // ivar: _base
@property (readonly, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hiddenRegions; // ivar: _hiddenRegions
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSNumber *iconColor; // ivar: _iconColor
@property (readonly, nonatomic) WFFileRepresentation *iconFile; // ivar: _iconFile
@property (retain, nonatomic) NSNumber *iconGlyph; // ivar: _iconGlyph
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSString *longDescription; // ivar: _longDescription
@property (readonly, nonatomic) NSInteger minVersion; // ivar: _minVersion
@property (readonly, nonatomic) NSDate *modifiedAt; // ivar: _modifiedAt
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly, nonatomic) NSNumber *searchable; // ivar: _searchable
@property (readonly, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly, nonatomic) WFFileRepresentation *shortcutFile; // ivar: _shortcutFile
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile; // ivar: _signedShortcutFile
@property (copy, nonatomic) NSString *signingStatus; // ivar: _signingStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedIdioms; // ivar: _supportedIdioms
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: _workflowRecord


+(id)properties;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)referenceActionForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertiesForEventLogging;
-(id)sharingURL;
-(void)ensureFileAssets;


@end


#endif