// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCDEVICESTATE_H
#define _TVRCDEVICESTATE_H

@class NSDictionary, NSError, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TVRCKeyboardState.h"

@interface _TVRCDeviceState : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *alternateIdentifiers; // ivar: _alternateIdentifiers
@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (nonatomic) NSInteger connectionType; // ivar: _connectionType
@property (copy, nonatomic) NSError *disconnectError; // ivar: _disconnectError
@property (nonatomic) NSInteger disconnectReason; // ivar: _disconnectReason
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) _TVRCKeyboardState *keyboardState; // ivar: _keyboardState
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (nonatomic) NSUInteger pairingCapability; // ivar: _pairingCapability
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (copy, nonatomic) NSSet *supportedButtons; // ivar: _supportedButtons
@property (nonatomic) BOOL supportsTouchEvents; // ivar: _supportsTouchEvents


+(BOOL)supportsSecureCoding;
+(id)deviceStateFromDevice:(id)arg0 ;
+(id)setOfStatesFromDevices:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif