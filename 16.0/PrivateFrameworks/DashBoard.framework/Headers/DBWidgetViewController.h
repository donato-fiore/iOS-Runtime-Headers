// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWIDGETVIEWCONTROLLER_H
#define DBWIDGETVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, NSArray;
@protocol DBWidgetViewFocusEnabledProviding, DBEnvironment;



@interface DBWidgetViewController : UIViewController <DBWidgetViewFocusEnabledProviding>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly, weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSArray *linearFocusItems;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsLargeSize; // ivar: _wantsLargeSize


-(BOOL)entireWidgetFocusable;
-(id)initWithEnvironment:(id)arg0 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg0 ;
-(void)_wallpaperChanged:(id)arg0 ;
-(void)invalidateConstraints;
-(void)loadView;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAppearanceForWallpaper;
-(void)widgetViewTapped;


@end


#endif