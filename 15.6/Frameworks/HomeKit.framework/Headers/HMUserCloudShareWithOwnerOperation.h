// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERCLOUDSHAREWITHOWNEROPERATION_H
#define HMUSERCLOUDSHAREWITHOWNEROPERATION_H

@class NSOperation, CKContainer, NSString, NSUUID, CKShare;
@protocol HMFLogging, OS_os_log;


#import "HMUser.h"

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) BOOL allowWriteAccess; // ivar: _allowWriteAccess
@property (readonly) id *analyticsEventSender; // ivar: _analyticsEventSender
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) HMUser *currentUser; // ivar: _currentUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *operationID; // ivar: _operationID
@property (readonly, nonatomic) HMUser *ownerUser; // ivar: _ownerUser
@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithShare:(id)arg0 container:(id)arg1 ownerUser:(id)arg2 allowWriteAccess:(BOOL)arg3 currentUser:(id)arg4 ;
-(id)initWithShare:(id)arg0 container:(id)arg1 ownerUser:(id)arg2 allowWriteAccess:(BOOL)arg3 currentUser:(id)arg4 analyticsEventSender:(id)arg5 ;
-(id)logIdentifier;
-(void)fetchParticipantForLookupInfo:(id)arg0 completion:(id)arg1 ;
-(void)main;
-(void)removeOwnerAsParticipant:(id)arg0 completion:(id)arg1 ;
-(void)saveShareAndObtainSavedOwner:(id)arg0 completion:(id)arg1 ;
-(void)sendShareToOwner:(id)arg0 from:(id)arg1 savedOwnerAsParticipant:(id)arg2 share:(id)arg3 completion:(id)arg4 ;


@end


#endif