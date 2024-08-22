// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINDDEVICEANDPLAYSOUNDINTENT_H
#define FINDDEVICEANDPLAYSOUNDINTENT_H

@class INIntent, NSArray;


#import "DeviceQuery.h"

@interface FindDeviceAndPlaySoundIntent : INIntent

@property (nonatomic, retain) DeviceQuery *deviceQuery;
@property (nonatomic, copy) NSArray *devices;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif