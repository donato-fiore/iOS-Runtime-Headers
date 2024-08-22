// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBFOCUSCONTROLLER_H
#define DBFOCUSCONTROLLER_H

@class NSMutableArray, NSString, UIWindow, UIScreen;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "DBFocusAssertion.h"

@interface DBFocusController : NSObject

@property (retain, nonatomic) NSMutableArray *assertions; // ivar: _assertions
@property (copy, nonatomic) NSString *displayID; // ivar: _displayID
@property (retain, nonatomic) NSObject<BSInvalidatable> *focusDeferral; // ivar: _focusDeferral
@property (weak, nonatomic) UIWindow *focusWindow; // ivar: _focusWindow
@property (retain, nonatomic) DBFocusAssertion *lastFocusAssertion; // ivar: _lastFocusAssertion
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen


-(id)description;
-(id)initWithScreen:(id)arg0 ;
-(int)focusedPid;
-(void)_applyAssertion:(id)arg0 withHeading:(NSUInteger)arg1 focusedFrame:(struct CGRect )arg2 ;
-(void)_updateEventFocusWithHeading:(NSUInteger)arg0 focusedFrame:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)dropReason:(id)arg0 ;
-(void)dropReason:(id)arg0 withHeading:(NSUInteger)arg1 focusedFrame:(struct CGRect )arg2 ;
-(void)invalidate;
-(void)takeWithPriority:(CGFloat)arg0 reason:(id)arg1 forWindow:(id)arg2 bundleIdentifier:(id)arg3 pid:(int)arg4 scene:(id)arg5 ;
-(void)takeWithPriority:(CGFloat)arg0 reason:(id)arg1 forWindow:(id)arg2 bundleIdentifier:(id)arg3 pid:(int)arg4 scene:(id)arg5 heading:(NSUInteger)arg6 focusedFrame:(struct CGRect )arg7 ;


@end


#endif