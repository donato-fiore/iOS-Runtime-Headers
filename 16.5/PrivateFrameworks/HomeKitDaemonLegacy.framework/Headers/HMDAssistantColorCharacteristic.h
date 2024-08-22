// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDASSISTANTCOLORCHARACTERISTIC_H
#define HMDASSISTANTCOLORCHARACTERISTIC_H

@class HMFObject, NSString;



@interface HMDAssistantColorCharacteristic : HMFObject

@property (readonly, nonatomic) NSString *format; // ivar: _format
@property (readonly, nonatomic) BOOL mandatory; // ivar: _mandatory
@property (readonly, nonatomic) NSString *readCharacteristicType; // ivar: _readCharacteristicType
@property (readonly, nonatomic) NSString *writeCharacteristicType; // ivar: _writeCharacteristicType


-(id)initWithReadCharacteristicType:(id)arg0 writeCharacteristicType:(id)arg1 format:(id)arg2 mandatory:(BOOL)arg3 ;


@end


#endif