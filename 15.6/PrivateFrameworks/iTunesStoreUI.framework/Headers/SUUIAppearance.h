// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUUIAPPEARANCE_H
#define SUUIAPPEARANCE_H

@class NSMutableDictionary, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUControlAppearance.h"
#import "SUTabBarAppearance.h"
#import "SUToolbarAppearance.h"

@interface SUUIAppearance : NSObject <NSCopying>

 {
    BOOL _isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
}


@property (copy, nonatomic) SUControlAppearance *backButtonAppearance; // ivar: _backButtonAppearance
@property (copy, nonatomic) SUControlAppearance *confirmationButtonAppearance; // ivar: _confirmationButtonAppearance
@property (copy, nonatomic) SUControlAppearance *destructiveButtonAppearance; // ivar: _destructiveButtonAppearance
@property (copy, nonatomic) SUControlAppearance *exitStoreButtonAppearance; // ivar: _exitStoreButtonAppearance
@property (copy, nonatomic) SUControlAppearance *forwardButtonAppearance; // ivar: _forwardButtonAppearance
@property (copy, nonatomic) NSDictionary *navigationBarTitleTextAttributes; // ivar: _navigationBarTitleTextAttributes
@property (copy, nonatomic) SUTabBarAppearance *tabBarAppearance; // ivar: _tabBarAppearance
@property (copy, nonatomic) SUToolbarAppearance *toolbarAppearance; // ivar: _toolbarAppearance


+(id)_defaultBackButtonAppearance;
+(id)_defaultButtonAppearance;
+(id)_defaultConfirmationButtonAppearance;
+(id)_defaultDestructiveButtonAppearance;
+(id)_defaultDoneButtonAppearance;
+(id)_defaultForwardButtonAppearance;
+(id)_defaultShadowWithColor:(id)arg0 offset:(struct CGSize )arg1 ;
+(id)_defaultTabBarAppearance;
+(id)defaultAppearance;
-(id)_copySegmentedControlKeyWithStyle:(NSInteger)arg0 tintStyle:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)navigationBarBackgroundImageForBarMetrics:(NSInteger)arg0 ;
-(id)navigationButtonAppearanceForStyle:(NSInteger)arg0 ;
-(id)segmentedControlAppearanceForStyle:(NSInteger)arg0 tintStyle:(NSInteger)arg1 ;
-(void)_styleBackBarButtonItem:(id)arg0 ;
-(void)dealloc;
-(void)setNavigationBarBackgroundImage:(id)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setNavigationButtonAppearance:(id)arg0 forStyle:(NSInteger)arg1 ;
-(void)setSegmentedControlAppearance:(id)arg0 forStyle:(NSInteger)arg1 tintStyle:(NSInteger)arg2 ;
-(void)styleBarButtonItem:(id)arg0 ;
-(void)styleConfirmationButtonItem:(id)arg0 ;
-(void)styleDestructiveButton:(id)arg0 ;
-(void)styleExitStoreButtonItem:(id)arg0 ;
-(void)styleForwardButtonItem:(id)arg0 ;
-(void)styleNavigationBar:(id)arg0 ;
-(void)styleSegmentedControl:(id)arg0 tintStyle:(NSInteger)arg1 ;
-(void)styleTabBar:(id)arg0 ;
-(void)styleTabBarItem:(id)arg0 ;
-(void)styleToolbar:(id)arg0 ;


@end


#endif