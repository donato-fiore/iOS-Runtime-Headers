// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREMOTEKEYBOARDSEVENTOBSERVER_H
#define _UIREMOTEKEYBOARDSEVENTOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol _UIEventObserver, _UIRemoteKeyboardsEventObserverDelegate;

#import <Foundation/Foundation.h>


@interface _UIRemoteKeyboardsEventObserver : NSObject <_UIEventObserver>

 {
    NSMutableDictionary *_touchTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIRemoteKeyboardsEventObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTextInputResponder; // ivar: _hasTextInputResponder
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keyboardIsVisible; // ivar: _keyboardIsVisible
@property (readonly) Class superclass;


-(BOOL)_isTrackingPencilTouch;
-(BOOL)_shouldTrackTouch:(id)arg0 ;
-(NSInteger)_preferredEventSourceForTouch:(id)arg0 tracking:(id)arg1 shouldUpdateOut:(*BOOL)arg2 ;
-(id)init;
-(void)_cancelTrackingForTouch:(id)arg0 ;
-(void)_endTrackingForTouch:(id)arg0 ;
-(void)_gestureRecognizer:(id)arg0 didTransitionToState:(NSInteger)arg1 ;
-(void)_invalidateTrackingForTouch:(id)arg0 ;
-(void)_markTrackingForTouch:(id)arg0 withGesture:(id)arg1 ;
-(void)_startTrackingForTouch:(id)arg0 ;
-(void)_trackTouch:(id)arg0 ;
-(void)_updateTrackingForTouch:(id)arg0 ;
-(void)dealloc;
-(void)peekApplicationEvent:(id)arg0 ;
-(void)textInputResponderDidChange:(id)arg0 ;


@end


#endif