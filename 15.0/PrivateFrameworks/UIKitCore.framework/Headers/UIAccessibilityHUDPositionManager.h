// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYHUDPOSITIONMANAGER_H
#define UIACCESSIBILITYHUDPOSITIONMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface UIAccessibilityHUDPositionManager : NSObject {
    NSMapTable *_managedHUDs;
    CGRect _keyboardAvoidanceArea;
}




+(id)sharedInstance;
-(id)init;
-(void)adjustViewPropertiesForHUD:(id)arg0 withReferenceView:(id)arg1 ;
-(void)adjustViewPropertiesForHUD:(id)arg0 withReferenceView:(id)arg1 keyboardFrame:(struct CGRect )arg2 ;
-(void)beginManagingPositionOfHUD:(id)arg0 withReferenceView:(id)arg1 ;
-(void)dealloc;
-(void)keyboardFrameDidChange:(id)arg0 ;
-(void)stopManagingPositionOfHUD:(id)arg0 ;
-(void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect )arg0 ;


@end


#endif