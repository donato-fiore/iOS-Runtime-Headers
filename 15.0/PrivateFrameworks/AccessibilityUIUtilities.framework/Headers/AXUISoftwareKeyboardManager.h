// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUISOFTWAREKEYBOARDMANAGER_H
#define AXUISOFTWAREKEYBOARDMANAGER_H

@class NSMutableSet;
@protocol AXUISoftwareKeyboardManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXUISoftwareKeyboardManager : NSObject {
    NSMutableSet *_reasonsToDisableSoftwareKeyboard;
    NSMutableSet *_reasonsToEnableSoftwareKeyboard;
}


@property (weak, nonatomic) NSObject<AXUISoftwareKeyboardManagerDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(BOOL)isHardwareKeyboardAttached;
-(id)init;
-(void)_overrideSetHardwareKeyboardAttached:(BOOL)arg0 ;
-(void)_setIsHardwareKeyboardAttached:(BOOL)arg0 ;
-(void)_updateHardwareKeyboardState;
-(void)_wst_setIsHardwareKeyboardAttached:(id)arg0 ;
-(void)addReasonToDisableSoftwareKeyboard:(id)arg0 ;
-(void)addReasonToEnableSoftwareKeyboard:(id)arg0 ;
-(void)dealloc;
-(void)removeReasonToDisableSoftwareKeyboard:(id)arg0 ;
-(void)removeReasonToEnableSoftwareKeyboard:(id)arg0 ;
-(void)updateKeyboardHardwareState;


@end


#endif