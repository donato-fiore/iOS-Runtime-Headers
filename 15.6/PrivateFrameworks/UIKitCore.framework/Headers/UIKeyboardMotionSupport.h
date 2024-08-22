// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDMOTIONSUPPORT_H
#define UIKEYBOARDMOTIONSUPPORT_H

@class NSDictionary, NSString;
@protocol _UIScreenBasedObject, UISplitKeyboardSource;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "UIWindowScene.h"

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject>

 {
    UIScreen *_screen;
    UIWindowScene *_canvas;
    id<UISplitKeyboardSource> *_controller;
}


@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<UISplitKeyboardSource> *masterController;
@property (readonly) Class superclass;


+(id)supportForScreen:(id)arg0 ;
+(id)supportForUIScene:(id)arg0 ;
-(BOOL)_matchingOptions:(id)arg0 ;
-(BOOL)generateSplitNotificationForNewPlacement:(id)arg0 ;
-(id)_initWithCanvas:(id)arg0 options:(id)arg1 ;
-(id)_initWithScreen:(id)arg0 options:(id)arg1 ;
-(id)_intendedCanvas;
-(void)_connectController:(id)arg0 ;
-(void)_disconnectingController:(id)arg0 ;
-(void)_updatedController;
-(void)dealloc;
-(void)translateToPlacement:(id)arg0 animated:(BOOL)arg1 ;
-(void)translateToPlacement:(id)arg0 quietly:(BOOL)arg1 animated:(BOOL)arg2 ;


@end


#endif