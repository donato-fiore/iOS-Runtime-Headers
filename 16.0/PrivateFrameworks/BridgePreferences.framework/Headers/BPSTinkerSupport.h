// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSTINKERSUPPORT_H
#define BPSTINKERSUPPORT_H

@class FAFamilyCircle, AKDevice, FAFamilyMember, NSSManager, FAProfilePictureStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BPSTinkerSupport : NSObject

@property (retain, nonatomic) FAFamilyCircle *cachedFamilyCircle; // ivar: _cachedFamilyCircle
@property (retain, nonatomic) AKDevice *currentTinkerAKDevice; // ivar: _currentTinkerAKDevice
@property (retain, nonatomic) FAFamilyMember *currentTinkerMember; // ivar: _currentTinkerMember
@property (retain, nonatomic) NSSManager *nssManager; // ivar: _nssManager
@property (retain, nonatomic) FAFamilyMember *organizerParentFamilyMember; // ivar: _organizerParentFamilyMember
@property (retain, nonatomic) FAFamilyMember *pairingParentFamilyMember; // ivar: _pairingParentFamilyMember
@property (retain, nonatomic) FAProfilePictureStore *profilePictureStore; // ivar: _profilePictureStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(BOOL)isActiveTinker;
-(id)cachedOrganizerParentFamilyMember;
-(id)cachedPairingParentFamilyMember;
-(id)cachedProfilePictureForFamilyMember:(id)arg0 ;
-(id)cachedTinkerAKDevice;
-(id)cachedTinkerFamilyMemeber;
-(id)familyMemberMatchingAccount:(id)arg0 inCircle:(id)arg1 ;
-(id)init;
-(void)fetchFamilyDetails;
-(void)fetchProfilePictures;
-(void)getActiveTinkerFamilyDetailsWithCompletion:(id)arg0 ;
-(void)getActiveTinkerFamilyMember:(id)arg0 ;
-(void)getActiveTinkerFamilyMemberDetailsWithCompletion:(id)arg0 ;
-(void)getActiveTinkerFamilyMemberWithCompletion:(id)arg0 ;
-(void)resetCachedDeviceValues;
-(void)setTinkerFamilyMember:(id)arg0 ;


@end


#endif