// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKINTERFACECONTROLLER_H
#define WKINTERFACECONTROLLER_H

@class WKCrownSequencer, NSMutableDictionary, NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WKInterfaceController : NSObject

@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, nonatomic) WKCrownSequencer *crownSequencer; // ivar: _crownSequencer
@property (retain, nonatomic) NSMutableDictionary *gestureRecognizers; // ivar: _gestureRecognizers
@property (retain, nonatomic) NSMutableArray *pendingGestureInstallationFinishedBlocks; // ivar: _pendingGestureInstallationFinishedBlocks
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (retain, nonatomic) NSArray *topLevelObjects; // ivar: _topLevelObjects
@property (retain, nonatomic) NSMutableArray *uninstalledGestureIDs; // ivar: _uninstalledGestureIDs
@property (retain, nonatomic) NSString *viewControllerID; // ivar: _viewControllerID


+(BOOL)openParentApplication:(id)arg0 reply:(id)arg1 ;
+(CGFloat)screenScale;
+(struct CGRect )screenBounds;
+(void)_insertPageControllersAtIndexes:(id)arg0 withNames:(id)arg1 contexts:(id)arg2 ;
+(void)_movePageControllerAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
+(void)_removePageControllersAtIndexes:(id)arg0 ;
+(void)reloadRootControllersWithNames:(id)arg0 contexts:(id)arg1 ;
-(id)contextForSegueWithIdentifier:(id)arg0 ;
-(id)contextForSegueWithIdentifier:(id)arg0 inTable:(id)arg1 rowIndex:(NSInteger)arg2 ;
-(id)contextsForSegueWithIdentifier:(id)arg0 ;
-(id)contextsForSegueWithIdentifier:(id)arg0 inTable:(id)arg1 rowIndex:(NSInteger)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_handleActionWithIdentifier:(id)arg0 forNotification:(id)arg1 remoteNotification:(id)arg2 localNotification:(id)arg3 ;
-(void)addMenuItemWithImage:(id)arg0 title:(id)arg1 action:(SEL)arg2 ;
-(void)addMenuItemWithImageNamed:(id)arg0 title:(id)arg1 action:(SEL)arg2 ;
-(void)addMenuItemWithItemIcon:(NSInteger)arg0 title:(id)arg1 action:(SEL)arg2 ;
-(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 ;
-(void)awakeWithContext:(id)arg0 ;
-(void)becomeCurrentPage;
-(void)beginGlanceUpdates;
-(void)clearAllMenuItems;
-(void)didAppear;
-(void)didDeactivate;
-(void)didRegisterWithRemoteInterface;
-(void)dismissAddPassesController;
-(void)dismissController;
-(void)dismissTextInputController;
-(void)endGlanceUpdates;
-(void)handleActionWithIdentifier:(id)arg0 forLocalNotification:(id)arg1 ;
-(void)handleActionWithIdentifier:(id)arg0 forNotification:(id)arg1 ;
-(void)handleActionWithIdentifier:(id)arg0 forRemoteNotification:(id)arg1 ;
-(void)handleUserActivity:(id)arg0 ;
-(void)interfaceDidScrollToTop;
-(void)interfaceOffsetDidScrollToBottom;
-(void)interfaceOffsetDidScrollToTop;
-(void)invalidateUserActivity;
-(void)pickerDidFocus:(id)arg0 ;
-(void)pickerDidResignFocus:(id)arg0 ;
-(void)pickerDidSettle:(id)arg0 ;
-(void)popController;
-(void)popToRootController;
-(void)presentAddPassesControllerWithPasses:(id)arg0 completion:(id)arg1 ;
-(void)presentControllerWithName:(id)arg0 context:(id)arg1 ;
-(void)presentControllerWithNames:(id)arg0 contexts:(id)arg1 ;
-(void)presentTextInputControllerWithSuggestions:(id)arg0 allowedInputMode:(NSInteger)arg1 completion:(id)arg2 ;
// -(void)presentTextInputControllerWithSuggestionsForLanguage:(id)arg0 allowedInputMode:(unk)arg1 completion:(NSInteger)arg2  ;
-(void)pushControllerWithName:(id)arg0 context:(id)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)table:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;
-(void)updateUserActivity:(id)arg0 userInfo:(id)arg1 ;
-(void)updateUserActivity:(id)arg0 userInfo:(id)arg1 webpageURL:(id)arg2 ;
-(void)willActivate;
-(void)willDisappear;


@end


#endif