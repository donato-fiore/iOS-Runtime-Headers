// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKAPPLEMEDIAACCESSORY_H
#define MKFCKAPPLEMEDIAACCESSORY_H

@class HMFPairingIdentity, NSDictionary, NSNumber;


#import "MKFCKAccessory.h"
#import "MKFCKResident.h"

@interface MKFCKAppleMediaAccessory : MKFCKAccessory

@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) MKFCKResident *resident;
@property (retain, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *variant;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif