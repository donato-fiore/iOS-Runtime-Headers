// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXEVENTREPRESENTATION_H
#define AXEVENTREPRESENTATION_H

@class NSData, NSDictionary, NSString;
@protocol AXEventRepresentationDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AXEventAccelerometerInfoRepresentation.h"
#import "AXEventData.h"
#import "AXEventGameControllerInfoRepresentation.h"
#import "AXEventHandInfoRepresentation.h"
#import "AXEventIOSMACPointerInfoRepresentation.h"
#import "AXEventKeyInfoRepresentation.h"
#import "AXEventPointerInfoRepresentation.h"

@interface AXEventRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *HIDAttributeData; // ivar: _HIDAttributeData
@property (nonatomic) NSUInteger HIDTime; // ivar: _HIDTime
@property (retain, nonatomic) AXEventAccelerometerInfoRepresentation *accelerometerInfo; // ivar: _accelerometerInfo
@property (retain, nonatomic) AXEventData *accessibilityData; // ivar: _accessibilityData
@property (nonatomic) NSUInteger additionalFlags; // ivar: _additionalFlags
@property (retain, nonatomic) NSDictionary *auxiliaryData; // ivar: _auxiliaryData
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (nonatomic) unsigned int contextId; // ivar: _contextId
@property (retain, nonatomic) *__IOHIDEvent creatorHIDEvent; // ivar: _creatorHIDEvent
@property (retain, nonatomic) *__IOHIDServiceClient creatorHIDServiceClient; // ivar: _creatorHIDServiceClient
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int didUpdateMask; // ivar: _didUpdateMask
@property (nonatomic) unsigned int displayId; // ivar: _displayId
@property (readonly, nonatomic) NSUInteger fingerCount;
@property (nonatomic) int flags; // ivar: _flags
@property (retain, nonatomic) AXEventGameControllerInfoRepresentation *gameControllerInfo; // ivar: _gameControllerInfo
@property (nonatomic) NSInteger generationCount; // ivar: _generationCount
@property (retain, nonatomic) AXEventHandInfoRepresentation *handInfo; // ivar: _handInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXEventIOSMACPointerInfoRepresentation *iosmacPointerInfo; // ivar: _iosmacPointerInfo
@property (nonatomic) BOOL isBuiltIn; // ivar: _isBuiltIn
@property (readonly, nonatomic) BOOL isCancel;
@property (readonly, nonatomic) BOOL isChordChange;
@property (nonatomic) BOOL isDisplayIntegrated; // ivar: _isDisplayIntegrated
@property (nonatomic) BOOL isGeneratedEvent; // ivar: _isGeneratedEvent
@property (readonly, nonatomic) BOOL isInRange;
@property (readonly, nonatomic) BOOL isInRangeLift;
@property (readonly, nonatomic) BOOL isLift;
@property (readonly, nonatomic) BOOL isMove;
@property (readonly, nonatomic) BOOL isTouchDown;
@property (readonly, nonatomic) BOOL isUpdate;
@property (retain, nonatomic) AXEventKeyInfoRepresentation *keyInfo; // ivar: _keyInfo
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) unsigned int originalType; // ivar: _originalType
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) AXEventPointerInfoRepresentation *pointerControllerInfo; // ivar: _pointerControllerInfo
@property (nonatomic, getter=isRedirectEvent) BOOL redirectEvent; // ivar: _redirectEvent
@property (nonatomic) NSInteger scrollAccelAmount; // ivar: _scrollAccelAmount
@property (nonatomic) NSInteger scrollAmount; // ivar: _scrollAmount
@property (nonatomic) NSUInteger senderID; // ivar: _senderID
@property (nonatomic) int subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemDrag) BOOL systemDrag; // ivar: _systemDrag
@property (nonatomic) unsigned int taskPort; // ivar: _taskPort
@property (nonatomic) NSUInteger time; // ivar: _time
@property (nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) BOOL useOriginalHIDTime; // ivar: _useOriginalHIDTime
@property (readonly, nonatomic) BOOL willBeUpdated;
@property (nonatomic) unsigned int willUpdateMask; // ivar: _willUpdateMask
@property (nonatomic) *void window; // ivar: _window
@property (nonatomic) CGPoint windowLocation; // ivar: _windowLocation


+(BOOL)_HIDEventIsAccessibilityEvent:(struct __IOHIDEvent *)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_digitizerRepresentation:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(id)arg1 ;
+(id)_gameControllerEvent:(struct __IOHIDEvent *)arg0 ;
+(id)_gameKeyboardControllerEvent:(struct __IOHIDEvent *)arg0 ;
+(id)_keyboardButtonEvent:(struct __IOHIDEvent *)arg0 ;
+(id)_motionGestureTapEvent:(struct __IOHIDEvent *)arg0 serviceClient:(struct __IOHIDServiceClient *)arg1 hidStreamIdentifier:(id)arg2 clientID:(id)arg3 taskPort:(unsigned int)arg4 ;
+(id)_pointerControllerEvent:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(id)arg1 ;
+(id)_vendorDefinedAccessibilityEvent:(struct __IOHIDEvent *)arg0 ;
+(id)_wheelEvent:(struct __IOHIDEvent *)arg0 ;
+(id)accelerometerRepresentation:(id)arg0 ;
+(id)accessibilityEventRepresentationWithSender:(NSInteger)arg0 usagePage:(NSInteger)arg1 usage:(NSInteger)arg2 ;
+(id)accessibilityEventRepresentationWithSender:(NSInteger)arg0 usagePage:(NSInteger)arg1 usage:(NSInteger)arg2 modifierFlags:(NSInteger)arg3 ;
+(id)accessibilityEventRepresentationWithSender:(NSInteger)arg0 usagePage:(NSInteger)arg1 usage:(NSInteger)arg2 modifierFlags:(NSInteger)arg3 eventValue1:(float)arg4 eventValue2:(float)arg5 ;
+(id)buttonRepresentationWithType:(unsigned int)arg0 ;
+(id)cancelEventForPathIndexMask:(unsigned int)arg0 ;
+(id)gestureRepresentationWithHandType:(unsigned int)arg0 locations:(id)arg1 ;
+(id)iosmacPointerRepresentationWithTypeWithPointerInfo:(id)arg0 ;
+(id)keyRepresentationWithType:(unsigned int)arg0 ;
+(id)representationWithData:(id)arg0 ;
+(id)representationWithHIDEvent:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(id)arg1 ;
+(id)representationWithHIDEvent:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(id)arg1 clientID:(id)arg2 taskPort:(unsigned int)arg3 ;
+(id)representationWithHIDEvent:(struct __IOHIDEvent *)arg0 serviceClient:(struct __IOHIDServiceClient *)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)representationWithHIDEvent:(struct __IOHIDEvent *)arg0 serviceClient:(struct __IOHIDServiceClient *)arg1 hidStreamIdentifier:(id)arg2 clientID:(id)arg3 taskPort:(unsigned int)arg4 ;
+(id)representationWithLocation:(struct CGPoint )arg0 windowLocation:(struct CGPoint )arg1 handInfo:(id)arg2 ;
+(id)representationWithType:(unsigned int)arg0 subtype:(int)arg1 time:(NSUInteger)arg2 location:(struct CGPoint )arg3 windowLocation:(struct CGPoint )arg4 handInfo:(id)arg5 ;
+(id)touchRepresentationWithHandType:(unsigned int)arg0 location:(struct CGPoint )arg1 ;
+(void)_appendKeyInfoToMediaKey:(id)arg0 usage:(NSInteger)arg1 downEvent:(BOOL)arg2 ;
-(BOOL)_HIDEventIsAccessibilityEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)isDownEvent;
-(NSUInteger)_machTimeForHIDEventRef;
-(id)_accessibilityDataFromRealEvent:(struct __IOHIDEvent *)arg0 ;
-(id)_senderNameForID;
-(id)accessibilityEventRepresentationTabularDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)denormalizedEventRepresentation:(BOOL)arg0 descale:(BOOL)arg1 ;
-(id)fakeTouchScaleEventRepresentation:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)normalizedEventRepresentation:(BOOL)arg0 scale:(BOOL)arg1 ;
-(struct __IOHIDEvent *)_accessibilityEventFromRealEvent:(struct __IOHIDEvent *)arg0 ;
-(struct __IOHIDEvent *)_newAccelerometerHIDEventRef;
-(struct __IOHIDEvent *)_newAccessibilityHIDEventRef;
-(struct __IOHIDEvent *)_newButtonHIDEventRefWithType:(unsigned int)arg0 ;
-(struct __IOHIDEvent *)_newHandHIDEventRef;
-(struct __IOHIDEvent *)_newIOSMACPointerRef;
-(struct __IOHIDEvent *)_newKeyboardHIDEventRef;
-(struct __IOHIDEvent *)newHIDEventRef;
-(unsigned char)screenEdgeForPoint:(struct CGPoint )arg0 ;
-(unsigned int)firstPathContextId;
-(unsigned int)pathIndexMask;
-(void)_applyAccessibilityDataToRealEvent:(struct __IOHIDEvent *)arg0 ;
-(void)applyAccessibilityDataToCreatorHIDEvent;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)modifyPoints:(id)arg0 ;
-(void)neuterUpdates;
-(void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg0 ;


@end


#endif