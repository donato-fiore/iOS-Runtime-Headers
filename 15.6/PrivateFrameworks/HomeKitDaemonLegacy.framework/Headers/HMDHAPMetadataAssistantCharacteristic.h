// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPMETADATAASSISTANTCHARACTERISTIC_H
#define HMDHAPMETADATAASSISTANTCHARACTERISTIC_H

@class HMFObject, NSString, NSDictionary;



@interface HMDHAPMetadataAssistantCharacteristic : HMFObject

@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *outValues; // ivar: _outValues
@property (retain, nonatomic) NSString *readHAPCharacteristicName; // ivar: _readHAPCharacteristicName
@property (nonatomic) BOOL supportsLocalization; // ivar: _supportsLocalization
@property (retain, nonatomic) NSDictionary *values; // ivar: _values
@property (retain, nonatomic) NSString *writeHAPCharacteristicName; // ivar: _writeHAPCharacteristicName


-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 readHAPCharacteristic:(id)arg1 writeHAPCharacteristic:(id)arg2 format:(id)arg3 ;


@end


#endif