// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCKEYBOARDFOCUSMANAGER_H
#define DOCKEYBOARDFOCUSMANAGER_H

@class NSPointerArray;
@protocol DOCKeyboardFocusable;

#import <Foundation/Foundation.h>


@interface DOCKeyboardFocusManager : NSObject {
    id<DOCKeyboardFocusable> *_currentlyFocused;
}


@property (retain) NSPointerArray *allKeyboardFocusable; // ivar: _allKeyboardFocusable
@property (nonatomic) BOOL externalFirstResponderInFlight; // ivar: _externalFirstResponderInFlight


+(BOOL)isCustomKeyboardFocusEnabled;
+(id)directionalKeyCommandsWithAction:(SEL)arg0 ;
+(id)sharedManager;
-(BOOL)_isRegistered:(id)arg0 ;
-(BOOL)requestCurrentFocus:(id)arg0 ;
-(BOOL)restoreCurrentlyFocused;
-(id)adjacentFocusableToFocusable:(id)arg0 direction:(NSInteger)arg1 ;
-(id)currentlyFocused;
-(id)init;
-(void)_printAllRegisteredFocusable;
-(void)registerKeyboardFocusable:(id)arg0 ;
-(void)unregisterKeyboardFocusable:(id)arg0 ;


@end


#endif