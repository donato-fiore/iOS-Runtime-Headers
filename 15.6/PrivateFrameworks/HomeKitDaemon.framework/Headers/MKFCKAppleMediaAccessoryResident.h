// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKAPPLEMEDIAACCESSORYRESIDENT_H
#define MKFCKAPPLEMEDIAACCESSORYRESIDENT_H



#import "MKFCKResident.h"
#import "MKFCKAppleMediaAccessory.h"

@interface MKFCKAppleMediaAccessoryResident : MKFCKResident

@property (retain, nonatomic) MKFCKAppleMediaAccessory *accessory;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif