// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCHARACTERISTICVALUEUPDATE_H
#define HMDCHARACTERISTICVALUEUPDATE_H

@class HMFObject, NSError, NSString, NSDate, NSNumber;


#import "HMDDevice.h"

@interface HMDCharacteristicValueUpdate : HMFObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly, nonatomic) NSString *updateIdentifier; // ivar: _updateIdentifier
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSDate *valueUpatedTime; // ivar: _valueUpatedTime
@property (readonly, nonatomic) NSNumber *valueUpdatedStateNumber; // ivar: _valueUpdatedStateNumber


-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 updateIdentifier:(id)arg1 remoteDevice:(id)arg2 ;


@end


#endif