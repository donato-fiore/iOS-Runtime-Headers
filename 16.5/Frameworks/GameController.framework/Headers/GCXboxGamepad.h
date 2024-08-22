// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCXBOXGAMEPAD_H
#define GCXBOXGAMEPAD_H



#import "GCExtendedGamepad.h"
#import "GCControllerButtonInput.h"

@interface GCXboxGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *buttonShare;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton1; // ivar: _paddleButton1
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton2; // ivar: _paddleButton2
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton3; // ivar: _paddleButton3
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton4; // ivar: _paddleButton4
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeExtraControllerElements;


@end


#endif