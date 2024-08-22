// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPSCONTROLLER_H
#define HMMEDIAGROUPSCONTROLLER_H

@class NSArray, NSString, NSUUID, NSDictionary;
@protocol HMFLogging, HMFObject, NSSecureCoding, HMMediaGroupsControllerDataSource, HMMediaGroupsControllerDelegate;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMMediaGroupsController : NSObject <HMFLogging, HMFObject, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (retain) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMMediaGroupsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaGroupsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (copy) NSDictionary *identifierToGroupMap; // ivar: _identifierToGroupMap
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)mergeWithNewController:(id)arg0 ;
-(id)availableDestinationsForDestination:(id)arg0 ;
-(id)availableDestinatonsForGroup:(id)arg0 ;
-(id)createGroupResponseHandlerWithPayload:(SEL)arg0 completion:(id)arg1 ;
-(id)groupForDestination:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 groups:(id)arg1 ;
-(id)logIdentifier;
-(id)mediaProfilesForGroup:(id)arg0 ;
-(id)updateGroupResponseHandlerWithGroup:(SEL)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(id)updateGroupsRequestPayloadWithIdentifier:(id)arg0 name:(id)arg1 destinations:(id)arg2 ;
-(void)__updateGroup:(id)arg0 name:(id)arg1 destinations:(id)arg2 completion:(id)arg3 ;
-(void)callCompletionHandler:(id)arg0 ;
// -(void)callCompletionHandler:(id)arg0 error:(unk)arg1  ;
// -(void)callCompletionHandler:(id)arg0 group:(unk)arg1  ;
// -(void)callCompletionHandler:(id)arg0 group:(unk)arg1 error:(id)arg2  ;
-(void)configureWithContext:(id)arg0 dataSource:(id)arg1 ;
-(void)createGroupWithName:(id)arg0 destinations:(id)arg1 completion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyClientOfDidReceiveGroup:(id)arg0 ;
-(void)notifyClientOfRemovedGroup:(id)arg0 ;
-(void)removeGroup:(id)arg0 completion:(id)arg1 ;
-(void)settingsForGroup:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToAllGroups;
-(void)unconfigure;
-(void)updateGroup:(id)arg0 destinations:(id)arg1 completion:(id)arg2 ;
-(void)updateGroup:(id)arg0 name:(id)arg1 completion:(id)arg2 ;
-(void)updateGroup:(id)arg0 name:(id)arg1 destinations:(id)arg2 completion:(id)arg3 ;


@end


#endif