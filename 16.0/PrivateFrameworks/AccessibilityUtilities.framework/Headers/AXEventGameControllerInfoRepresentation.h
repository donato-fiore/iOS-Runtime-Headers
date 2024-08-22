// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXEVENTGAMECONTROLLERINFOREPRESENTATION_H
#define AXEVENTGAMECONTROLLERINFOREPRESENTATION_H

@class NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *description;
@property (nonatomic) CGFloat directionPadDown; // ivar: _directionPadDown
@property (nonatomic) CGFloat directionPadLeft; // ivar: _directionPadLeft
@property (nonatomic) CGFloat directionPadRight; // ivar: _directionPadRight
@property (nonatomic) CGFloat directionPadUp; // ivar: _directionPadUp
@property (nonatomic) CGFloat faceButtonA; // ivar: _faceButtonA
@property (nonatomic) CGFloat faceButtonB; // ivar: _faceButtonB
@property (nonatomic) CGFloat faceButtonX; // ivar: _faceButtonX
@property (nonatomic) CGFloat faceButtonY; // ivar: _faceButtonY
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat homeButton; // ivar: _homeButton
@property (readonly, nonatomic) BOOL isDirectionPadPressed;
@property (readonly, nonatomic) BOOL isFaceButtonPressed;
@property (readonly, nonatomic) BOOL isJoystickPressed;
@property (readonly, nonatomic) BOOL isKeyboardTypeButtonPressed;
@property (readonly, nonatomic) BOOL isShoulderButtonPressed;
@property (readonly, nonatomic) BOOL leftJoystickActive;
@property (nonatomic) CGFloat leftJoystickButton; // ivar: _leftJoystickButton
@property (nonatomic) CGFloat leftJoystickX; // ivar: _leftJoystickX
@property (nonatomic) CGFloat leftJoystickY; // ivar: _leftJoystickY
@property (nonatomic) CGFloat menuButton; // ivar: _menuButton
@property (readonly, nonatomic) BOOL rightJoystickActive;
@property (nonatomic) CGFloat rightJoystickButton; // ivar: _rightJoystickButton
@property (nonatomic) CGFloat rightJoystickX; // ivar: _rightJoystickX
@property (nonatomic) CGFloat rightJoystickY; // ivar: _rightJoystickY
@property (nonatomic) CGFloat shoulderButtonL1; // ivar: _shoulderButtonL1
@property (nonatomic) CGFloat shoulderButtonL2; // ivar: _shoulderButtonL2
@property (nonatomic) CGFloat shoulderButtonR1; // ivar: _shoulderButtonR1
@property (nonatomic) CGFloat shoulderButtonR2; // ivar: _shoulderButtonR2
@property (readonly) Class superclass;
@property (nonatomic) CGFloat viewButton; // ivar: _viewButton


+(BOOL)supportsSecureCoding;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif