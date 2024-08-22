// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDUALSENSEGAMEPAD_H
#define GCDUALSENSEGAMEPAD_H



#import "GCExtendedGamepad.h"
#import "GCDualSenseAdaptiveTrigger.h"
#import "GCControllerButtonInput.h"
#import "GCControllerDirectionPad.h"

@interface GCDualSenseGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *leftTrigger;
@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *rightTrigger;
@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton; // ivar: _touchpadButton
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary; // ivar: _touchpadPrimary
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary; // ivar: _touchpadSecondary


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_activateExtendedSupport;
-(void)initializeExtraControllerElements;
-(void)populateEncodedInitInfo:(struct ? *)arg0 ;


@end


#endif