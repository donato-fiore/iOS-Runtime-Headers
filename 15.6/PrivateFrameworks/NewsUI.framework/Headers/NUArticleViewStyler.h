// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEVIEWSTYLER_H
#define NUARTICLEVIEWSTYLER_H

@class UIColor;
@protocol NUArticleViewStyler;

#import <Foundation/Foundation.h>


@interface NUArticleViewStyler : NSObject <NUArticleViewStyler>



@property (readonly, nonatomic) UIColor *mainBackgroundColor; // ivar: _mainBackgroundColor
@property (readonly, nonatomic) NSInteger statusBarStyle; // ivar: _statusBarStyle
@property (retain, nonatomic) UIColor *tabBarTintColor; // ivar: _tabBarTintColor
@property (retain, nonatomic) UIColor *toolbarTintColor; // ivar: _toolbarTintColor
@property (readonly, nonatomic) NSInteger topBackgroundStatusBarStyle;
@property (readonly, nonatomic) UIColor *topContentColor; // ivar: _topContentColor


-(NSInteger)statusBarStyleForBackgroundColor:(id)arg0 ;
-(id)initWithBackgroundColor:(id)arg0 topBackgroundColor:(id)arg1 ;
-(void)styleTabBar:(id)arg0 ;
-(void)styleToolbar:(id)arg0 ;
-(void)unstyleTabBar:(id)arg0 overrideRestoreColor:(id)arg1 ;
-(void)unstyleToolbar:(id)arg0 overrideRestoreColor:(id)arg1 ;


@end


#endif