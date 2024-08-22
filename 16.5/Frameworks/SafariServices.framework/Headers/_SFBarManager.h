// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFBARMANAGER_H
#define _SFBARMANAGER_H

@class NSMapTable, NSTimer, NSArray, UIImage, NSString, _SWCollaborationButtonView;
@protocol _SFBarManagerDelegate;

#import <Foundation/Foundation.h>


@interface _SFBarManager : NSObject {
    NSMapTable *_barToRegistrationMap;
    BOOL _deferUpdateAllRegistrations;
    BOOL _needsUpdateAllRegistrations;
    NSTimer *_coalescedUpdatesTimer;
    CGFloat _lastCoalescedUpdatesTime;
    id *_coalescedUpdatesBlock;
    NSArray *_itemConfigurationMap;
    UIImage *_customActivityImage;
    NSString *_customActivityAccessibilityLabel;
}


@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton; // ivar: _collaborationButton
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (weak, nonatomic) NSObject<_SFBarManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat downloadsItemProgress; // ivar: _downloadsItemProgress
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)barRegistration:(id)arg0 canHandleLongPressForBarItem:(NSInteger)arg1 ;
-(BOOL)isBarItemEnabled:(NSInteger)arg0 ;
-(BOOL)isBarItemHidden:(NSInteger)arg0 ;
-(BOOL)isBarItemSelected:(NSInteger)arg0 ;
-(NSUInteger)test_numberOfRegistrations;
-(id)init;
-(id)test_registrationForBar:(id)arg0 ;
-(struct CGRect )frameForBarItem:(NSInteger)arg0 inCoordinateSpace:(id)arg1 ;
-(void)_invalidateCoalescedUpdatesTimer;
-(void)_updateAllRegistrations;
-(void)_updateAllRegistrationsAnimated:(BOOL)arg0 ;
-(void)_updateRegistrationWithToken:(id)arg0 animated:(BOOL)arg1 ;
-(void)barRegistration:(id)arg0 didReceiveLongPressForBarItem:(NSInteger)arg1 ;
-(void)barRegistration:(id)arg0 didReceiveTapForBarItem:(NSInteger)arg1 ;
-(void)barRegistration:(id)arg0 didReceiveTouchDownForBarItem:(NSInteger)arg1 ;
-(void)performCoalescedUpdates:(id)arg0 ;
-(void)performCoalescedUpdatesAnimated:(BOOL)arg0 updates:(id)arg1 ;
-(void)performCoalescedUpdatesNowAnimated:(BOOL)arg0 ;
-(void)pulseDownloadsItem;
-(void)registerBar:(id)arg0 withToken:(id)arg1 ;
-(void)registerToolbar:(id)arg0 withLayout:(NSInteger)arg1 persona:(NSInteger)arg2 ;
-(void)registerUnifiedBar:(id)arg0 withPersona:(NSInteger)arg1 ;
-(void)setBarItem:(NSInteger)arg0 attributedTitle:(id)arg1 ;
-(void)setBarItem:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 hidden:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 menu:(id)arg1 ;
-(void)setBarItem:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 title:(id)arg1 ;
-(void)setCustomActivityImage:(id)arg0 accessibilityLabel:(id)arg1 ;
-(void)setDownloadsItemNeedsLayout;
-(void)setImage:(id)arg0 forBarItem:(NSInteger)arg1 ;
-(void)visibleBarItemsNeedUpdate;


@end


#endif