// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSWITCH_H
#define AXSWITCH_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMIDIEvent.h"

@interface AXSwitch : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger accessibilityEventModifierFlags; // ivar: _accessibilityEventModifierFlags
@property (nonatomic) NSInteger accessibilityEventUsage; // ivar: _accessibilityEventUsage
@property (nonatomic) NSInteger accessibilityEventUsagePage; // ivar: _accessibilityEventUsagePage
@property (nonatomic) NSInteger action; // ivar: _action
@property (nonatomic) NSInteger buttonNumber; // ivar: _buttonNumber
@property (nonatomic) NSUInteger cameraSwitch; // ivar: _cameraSwitch
@property (nonatomic) NSUInteger expressionSensitivity; // ivar: _expressionSensitivity
@property (readonly, nonatomic) BOOL hasLongPressAction;
@property (nonatomic) NSInteger headSwitch; // ivar: _headSwitch
@property (nonatomic) unsigned short keyCode; // ivar: _keyCode
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (nonatomic) NSInteger longPressAction; // ivar: _longPressAction
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (retain, nonatomic) AXMIDIEvent *midiEvent; // ivar: _midiEvent
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *productName; // ivar: _productName
@property (copy, nonatomic) NSString *remoteDeviceIdentifier; // ivar: _remoteDeviceIdentifier
@property (copy, nonatomic) NSString *remoteDeviceName; // ivar: _remoteDeviceName
@property (copy, nonatomic) NSString *remoteSwitchIdentifier; // ivar: _remoteSwitchIdentifier
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) BOOL supportsLongPress;
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)expressionToSwitchTypeMapping;
+(id)switchWithAction:(NSInteger)arg0 name:(id)arg1 source:(id)arg2 type:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAction:(NSInteger)arg0 name:(id)arg1 source:(id)arg2 type:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif