// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCDUALSHOCKGAMEPAD_H
#define GCDUALSHOCKGAMEPAD_H



#import "GCExtendedGamepad.h"
#import "GCControllerButtonInput.h"
#import "GCControllerDirectionPad.h"

@interface GCDualShockGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton; // ivar: _touchpadButton
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary; // ivar: _touchpadPrimary
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary; // ivar: _touchpadSecondary


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_activateExtendedSupport;
-(void)initializeExtraControllerElements;


@end


#endif