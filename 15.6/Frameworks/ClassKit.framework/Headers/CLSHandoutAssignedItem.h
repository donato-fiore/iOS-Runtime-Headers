// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSHANDOUTASSIGNEDITEM_H
#define CLSHANDOUTASSIGNEDITEM_H

@class NSString, NSMutableSet;
@protocol CLSRelationable;


#import "CLSObject.h"
#import "CLSActivity.h"

@interface CLSHandoutAssignedItem : CLSObject <CLSRelationable>

 {
    NSString *_currentActivityID;
    NSString *_title;
    NSString *_identifier;
    CLSActivity *_currentActivity;
    NSMutableSet *_bundleIDs;
}


@property (readonly, copy, nonatomic) NSMutableSet *bundleIDs;
@property (readonly, nonatomic) CLSActivity *currentActivity;
@property (copy, nonatomic) NSString *currentActivityID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(NSInteger)authorizationStatus;
-(NSInteger)effectiveAuthorizationStatus;
-(id)createNewActivity;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 title:(id)arg1 handoutAttachmentID:(id)arg2 ;
-(void)addBundleIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)setAppIdentifier:(id)arg0 ;


@end


#endif