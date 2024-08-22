// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDHANDOUTATTACHMENT_H
#define CLSARCHIVEDHANDOUTATTACHMENT_H

@class NSURL, NSArray, NSString;
@protocol CLSRelationable;


#import "CLSObject.h"
#import "CLSArchivedSurvey.h"
#import "CLSArchivedHandout.h"

@interface CLSArchivedHandoutAttachment : CLSObject <CLSRelationable>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSArray *archivedAssets;
@property (readonly, copy, nonatomic) CLSArchivedSurvey *archivedSurvey;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *contentStoreIdentifier; // ivar: _contentStoreIdentifier
@property (readonly, nonatomic) NSString *contextCustomTypeName; // ivar: _contextCustomTypeName
@property (readonly, nonatomic) NSArray *contextPath; // ivar: _contextPath
@property (readonly, nonatomic) BOOL contextSourceIsCatalog; // ivar: _contextSourceIsCatalog
@property (readonly, nonatomic) NSString *contextSummary; // ivar: _contextSummary
@property (readonly, nonatomic) NSInteger contextType; // ivar: _contextType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayOrder; // ivar: _displayOrder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLSArchivedHandout *parent;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (readonly, nonatomic) int permissionType; // ivar: _permissionType
@property (readonly, nonatomic) int shareType; // ivar: _shareType
@property (readonly, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 title:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif