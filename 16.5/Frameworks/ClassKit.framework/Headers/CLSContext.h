// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCONTEXT_H
#define CLSCONTEXT_H

@class NSURL, NSString, NSArray, NSSet;
@protocol CLSRelationable;


#import "CLSObject.h"
#import "CLSActivity.h"

@interface CLSContext : CLSObject <CLSRelationable>

 {
    BOOL _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    NSInteger _displayOrder;
    NSString *_summary;
    NSString *_customTypeName;
    _NSRange _suggestedAge;
    _NSRange _suggestedCompletionTime;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isAssignable) BOOL assignable; // ivar: _assignable
@property (nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (readonly, nonatomic) CLSActivity *currentActivity;
@property (copy, nonatomic) NSString *currentActivityID;
@property (copy, nonatomic) NSString *customTypeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *identifierPath;
@property (copy, nonatomic) NSArray *path; // ivar: _path
@property (readonly, copy, nonatomic) NSSet *progressReportingCapabilities;
@property (copy, nonatomic) NSString *stableObjectID; // ivar: _stableObjectID
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *storeTeamID; // ivar: _storeTeamID
@property (nonatomic) _NSRange suggestedAge;
@property (nonatomic) _NSRange suggestedCompletionTime;
@property (copy, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic) *CGImage thumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSURL *universalLinkURL;


+(BOOL)conformsToProtocol:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)allowedTopics;
+(id)arrayOfStringClasses;
+(id)defaultProgressReportingCapability;
+(id)objectIDForIdentifierPath:(id)arg0 ;
+(id)objectIDPathFromIdentifierPath:(id)arg0 ;
+(id)relations;
+(id)reservedContextTypes;
+(id)stableObjectIDForIdentifierPath:(id)arg0 ;
+(id)stableObjectIDPathFromIdentifierPath:(id)arg0 ;
+(id)validatedContextIdentifierPathFromPath:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(NSInteger)effectiveAuthorizationStatus;
-(id)_init;
-(id)_navigationNodes;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)childContextWithIdentifier:(id)arg0 ;
-(id)createNewActivity;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalType:(NSInteger)arg0 identifier:(id)arg1 title:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 title:(id)arg2 ;
-(id)navigationChildContexts;
-(id)newItemProvider;
-(void)addChildContext:(id)arg0 ;
-(void)addNavigationChildContext:(id)arg0 ;
-(void)addProgressReportingCapabilities:(id)arg0 ;
-(void)becomeActive;
-(void)descendantMatchingIdentifierPath:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeFromParent;
-(void)removeNavigationChildContext:(id)arg0 ;
-(void)resignActive;


@end


#endif