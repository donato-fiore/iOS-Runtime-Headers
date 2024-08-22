// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKMEDIAACCESSORY_H
#define MKFCKMEDIAACCESSORY_H

@class HMFPairingIdentity;


#import "MKFCKAccessory.h"

@interface MKFCKMediaAccessory : MKFCKAccessory

@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;


+(id)fetchRequest;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;


@end


#endif