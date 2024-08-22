// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKUSER_H
#define MKFCKUSER_H

@class NSString, NSSet, NSUUID, HAPPairingIdentity, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"

@interface MKFCKUser : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) NSInteger announceAccessLevel;
@property (retain, nonatomic) NSSet *automations;
@property (nonatomic) NSInteger camerasAccessLevel;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) MKFCKHome *ownedHome;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (nonatomic) NSInteger privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif