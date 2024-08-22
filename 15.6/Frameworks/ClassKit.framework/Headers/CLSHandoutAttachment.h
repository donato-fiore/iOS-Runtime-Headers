// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSHANDOUTATTACHMENT_H
#define CLSHANDOUTATTACHMENT_H

@class NSURL, NSArray, NSString, NSDate;
@protocol CLSRelationable, CLSCollaborationStateRepresentable, CLSMutableAssetAdopter;


#import "CLSObject.h"
#import "CLSHandout.h"
#import "CLSSurvey.h"

@interface CLSHandoutAttachment : CLSObject <CLSRelationable, CLSCollaborationStateRepresentable, CLSMutableAssetAdopter>

 {
    int _shareType;
    int _permissionType;
    NSURL *_URL;
    NSArray *_contextPath;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    NSString *_contentStoreIdentifier;
    NSString *_contextSummary;
    NSString *_contextCustomTypeName;
    BOOL _contextSourceIsCatalog;
    int _completionStatus;
    NSInteger _displayOrder;
    NSInteger _contextType;
    NSDate *_dateLastCompleted;
}


@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *collaborationStates;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) int completionStatus;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (copy, nonatomic) NSString *contextCustomTypeName;
@property (copy, nonatomic) NSArray *contextPath;
@property (nonatomic) BOOL contextSourceIsCatalog;
@property (copy, nonatomic) NSString *contextSummary;
@property (nonatomic) NSInteger contextType;
@property (retain, nonatomic) NSDate *dateLastCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) CLSHandout *parent;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (nonatomic) int permissionType;
@property (nonatomic) int shareType;
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CLSSurvey *survey;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)assetForPerson:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 title:(id)arg1 ;
-(void)addAsset:(id)arg0 ;
-(void)addSurvey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getNumberOfAttemptsWithCompletion:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;
-(void)removeSurvey:(id)arg0 ;


@end


#endif