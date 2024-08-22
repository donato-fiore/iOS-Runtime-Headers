// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKAPPLEMEDIAACCESSORY_H
#define MKFCKAPPLEMEDIAACCESSORY_H

@class NSDictionary, NSNumber;


#import "MKFCKMediaAccessory.h"
#import "MKFCKAppleMediaAccessoryResident.h"

@interface MKFCKAppleMediaAccessory : MKFCKMediaAccessory

@property (retain, nonatomic) MKFCKAppleMediaAccessoryResident *resident;
@property (retain, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSNumber *variant;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)_encodeSettingGroup:(id)arg0 ;


@end


#endif