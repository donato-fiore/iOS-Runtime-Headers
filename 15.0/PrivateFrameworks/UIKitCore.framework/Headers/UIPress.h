// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRESS_H
#define UIPRESS_H

@class NSMutableArray, NSString, NSArray;
@protocol _UIResponderForwardable, _UIEventComponent;

#import <Foundation/Foundation.h>

#import "UIResponder.h"
#import "UIKey.h"
#import "UIWindow.h"

@interface UIPress : NSObject <_UIResponderForwardable, _UIEventComponent>

 {
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    BOOL _abandonForwardingRecord;
}


@property (nonatomic, setter=_setForwardablePhase:) NSInteger _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property (nonatomic) NSUInteger clickCount; // ivar: _clickCount
@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic, getter=_gameControllerComponent, setter=_setGameControllerComponent:) NSUInteger gameControllerComponent; // ivar: _gameControllerComponent
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDelayed; // ivar: _isDelayed
@property (retain, nonatomic) UIKey *key; // ivar: _key
@property (nonatomic, getter=isLongClick) BOOL longClick; // ivar: _longClick
@property (nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (retain, nonatomic) UIResponder *responder; // ivar: _responder
@property (nonatomic) BOOL sentPressesEnded; // ivar: _sentPressesEnded
@property (nonatomic, getter=_source, setter=_setSource:) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)_isAbandoningForwardingRecord;
-(BOOL)_isDirectionalPress;
-(BOOL)_isSynthetic;
-(BOOL)_wantsForwardingFromResponder:(id)arg0 toNextResponder:(id)arg1 withEvent:(id)arg2 ;
-(SEL)_responderSelectorForPhase:(NSInteger)arg0 ;
-(id)_forwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
-(void)_loadStateFromPress:(id)arg0 ;
-(void)_loadStateFromPressInfo:(id)arg0 ;
-(void)_removeGestureRecognizer:(id)arg0 ;


@end


#endif