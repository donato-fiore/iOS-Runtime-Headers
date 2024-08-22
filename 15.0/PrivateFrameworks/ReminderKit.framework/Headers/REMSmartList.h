// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMSMARTLIST_H
#define REMSMARTLIST_H

@class NSString, NSData;
@protocol REMObjectIDProviding, REMSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccount.h"
#import "REMObjectID.h"
#import "REMColor.h"
#import "REMSmartListCustomContext.h"
#import "REMList.h"
#import "REMResolutionTokenMap.h"
#import "REMSmartListStorage.h"
#import "REMStore.h"

@interface REMSmartList : NSObject <REMObjectIDProviding, REMSupportedVersionProviding>



@property (retain, nonatomic) REMAccount *account; // ivar: _account
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) REMSmartListCustomContext *customContext;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly, nonatomic) NSData *filterData;
@property (nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMList *parentList; // ivar: _parentList
@property (readonly, nonatomic) REMObjectID *parentListID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) REMSmartListStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithStore:(id)arg0 account:(id)arg1 parentList:(id)arg2 storage:(id)arg3 ;
-(id)initWithStore:(id)arg0 storage:(id)arg1 ;
-(id)manualOrderingListID;
-(id)manualOrderingObjectID;
-(id)optionalObjectID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif