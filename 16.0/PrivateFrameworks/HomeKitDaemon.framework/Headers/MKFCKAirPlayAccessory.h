// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKAIRPLAYACCESSORY_H
#define MKFCKAIRPLAYACCESSORY_H

@class HMFPairingIdentity, NSString;


#import "MKFCKAccessory.h"

@interface MKFCKAirPlayAccessory : MKFCKAccessory

@property (nonatomic) short minimumUserPrivilege;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *password;


+(id)fetchRequest;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)validateMinimumUserPrivilege:(*id)arg0 error:(*id)arg1 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;


@end


#endif