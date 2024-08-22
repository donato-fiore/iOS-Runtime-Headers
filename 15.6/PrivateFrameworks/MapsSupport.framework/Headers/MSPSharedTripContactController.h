// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPSHAREDTRIPCONTACTCONTROLLER_H
#define MSPSHAREDTRIPCONTACTCONTROLLER_H

@class NSMutableOrderedSet, NSSet, NSMutableSet, NSOrderedSet;
@protocol MSPSharedTripXPCServer, OS_dispatch_queue, MSPSharedTripContactControllerDelegate;

#import <Foundation/Foundation.h>


@interface MSPSharedTripContactController : NSObject {
    NSMutableOrderedSet *_contactsValues;
    NSSet *_activeHandles;
    NSMutableSet *_pendingContacts;
    id<MSPSharedTripXPCServer> *_sharedTripServer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}


@property (readonly, nonatomic) NSOrderedSet *activeContactsValues;
@property (weak, nonatomic) NSObject<MSPSharedTripContactControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_contactIsActive:(id)arg0 ;
-(BOOL)contactIsActive:(id)arg0 ;
-(id)_existingValueForContact:(id)arg0 ;
-(id)initWithSharedTripServer:(id)arg0 ;
-(void)_didStartSharingWithContact:(id)arg0 withCapabilityType:(NSUInteger)arg1 error:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_notifyDelegateContactsChanged;
-(void)_shareWithContactValue:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_stopAllSharingWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)_stopSharingWithContactValue:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_updateActiveSharingHandles:(id)arg0 ;
-(void)shareWithContactValue:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)stopAllSharingWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)stopSharingWithContactValue:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)updateActiveSharingHandles:(id)arg0 ;


@end


#endif