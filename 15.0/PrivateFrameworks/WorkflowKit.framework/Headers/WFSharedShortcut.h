// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHAREDSHORTCUT_H
#define WFSHAREDSHORTCUT_H

@class NSDate, NSString, NSNumber, WFFileRepresentation, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>

#import "WFWorkflowIcon.h"
#import "WFWorkflowRecord.h"

@interface WFSharedShortcut : NSObject <WFCloudKitItem>



@property (readonly, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, nonatomic) NSString *createdBy; // ivar: _createdBy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (retain, nonatomic) NSNumber *iconColor; // ivar: _iconColor
@property (retain, nonatomic) WFFileRepresentation *iconFile; // ivar: _iconFile
@property (retain, nonatomic) NSNumber *iconGlyph; // ivar: _iconGlyph
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (retain, nonatomic) WFFileRepresentation *shortcutFile; // ivar: _shortcutFile
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile; // ivar: _signedShortcutFile
@property (copy, nonatomic) NSString *signingStatus; // ivar: _signingStatus
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: _workflowRecord


+(id)properties;
+(id)recordType;
-(id)propertiesForEventLogging;
-(id)sharingURL;
-(void)ensureFileAssets;


@end


#endif