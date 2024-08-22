// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBEVENT_H
#define WEBEVENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WebEvent : NSObject {
    CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    NSUInteger _keyboardFlags;
    NSString *_inputManagerHint;
    unsigned short _keyCode;
    BOOL _tabKey;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}


@property (readonly, retain, nonatomic) NSString *characters;
@property (readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property (readonly, nonatomic) float deltaX;
@property (readonly, nonatomic) float deltaY;
@property (readonly, nonatomic) float gestureRotation;
@property (readonly, nonatomic) float gestureScale;
@property (readonly, retain, nonatomic) NSString *inputManagerHint;
@property (readonly, nonatomic) BOOL isGesture;
@property (readonly, nonatomic) unsigned short keyCode;
@property (readonly, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;
@property (readonly, nonatomic) NSUInteger keyboardFlags;
@property (readonly, nonatomic) CGPoint locationInWindow;
@property (readonly, nonatomic) unsigned int modifierFlags;
@property (readonly, nonatomic, getter=isTabKey) BOOL tabKey;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) unsigned int touchCount;
@property (readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property (readonly, retain, nonatomic) NSArray *touchLocations;
@property (readonly, retain, nonatomic) NSArray *touchPhases;
@property (readonly, nonatomic) int type; // ivar: _type
@property (nonatomic) BOOL wasHandled; // ivar: _wasHandled


-(id)_eventDescription;
-(id)_modiferFlagsDescription;
-(id)_touchLocationsDescription:(id)arg0 ;
-(id)_touchPhaseDescription:(int)arg0 ;
-(id)description;
-(id)initWithKeyEventType:(int)arg0 timeStamp:(CGFloat)arg1 characters:(id)arg2 charactersIgnoringModifiers:(id)arg3 modifiers:(unsigned int)arg4 isRepeating:(BOOL)arg5 withFlags:(NSUInteger)arg6 withInputManagerHint:(id)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 ;
-(id)initWithMouseEventType:(int)arg0 timeStamp:(CGFloat)arg1 location:(struct CGPoint )arg2 ;
-(id)initWithMouseEventType:(int)arg0 timeStamp:(CGFloat)arg1 location:(struct CGPoint )arg2 modifiers:(unsigned int)arg3 ;
-(id)initWithScrollWheelEventWithTimeStamp:(CGFloat)arg0 location:(struct CGPoint )arg1 deltaX:(float)arg2 deltaY:(float)arg3 ;
-(id)initWithTouchEventType:(int)arg0 timeStamp:(CGFloat)arg1 location:(struct CGPoint )arg2 modifiers:(unsigned int)arg3 touchCount:(unsigned int)arg4 touchLocations:(id)arg5 touchIdentifiers:(id)arg6 touchPhases:(id)arg7 isGesture:(BOOL)arg8 gestureScale:(float)arg9 gestureRotation:(float)arg10 ;
-(void)dealloc;


@end


#endif