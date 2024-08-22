// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(id)allDirectionalKeyCommandsWithAction:(SEL)arg0 prioritize:(BOOL)arg1 ;
+(id)directionalKeyCommandsWithAction:(SEL)arg0 prioritize:(BOOL)arg1 ;
+(id)selectionKeyCommandsWithAction:(SEL)arg0 prioritize:(BOOL)arg1 ;
+(id)sharedManager;
+(id)systemProvidedDirectionalKeyCommandsWithAction:(SEL)arg0 prioritize:(BOOL)arg1 ;
+(id)systemProvidedSelectionKeyCommandsWithAction:(SEL)arg0 prioritize:(BOOL)arg1 ;
+(void)_applySystemOverridePriority:(id)arg0 ;
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