// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIDASHBOARDWIDGETWINDOW_H
#define CRSUIDASHBOARDWIDGETWINDOW_H

@class NSXPCConnection, NSString, UIColor, NSArray;
@protocol CRSUIDashboardWidgetWindowClient, BSInvalidatable;


#import "CRSUIWindow.h"

@interface CRSUIDashboardWidgetWindow : CRSUIWindow <CRSUIDashboardWidgetWindowClient, BSInvalidatable>



@property (retain, nonatomic) NSXPCConnection *dashboardWindowServiceConnection; // ivar: _dashboardWindowServiceConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *focusHighlightColor;
@property (retain, nonatomic) NSArray *focusableItems; // ivar: _focusableItems
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSystemPrimaryFocusColor; // ivar: _useSystemPrimaryFocusColor
@property (retain, nonatomic) NSArray *widgetSizes; // ivar: _widgetSizes


-(id)_clientFocusableItemForItem:(id)arg0 ;
-(id)_focusableItemForClientItem:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_invalidateConnection;
-(void)_invalidateCurrentFocusableItems;
-(void)_windowDidCreateContext:(id)arg0 ;
-(void)dealloc;
-(void)hostFocusableItem:(id)arg0 focused:(BOOL)arg1 ;
-(void)hostFocusableItem:(id)arg0 pressed:(BOOL)arg1 ;
-(void)hostSelectedFocusableItem:(id)arg0 ;
-(void)hostSetUseSystemPrimaryFocusColor:(BOOL)arg0 ;
-(void)hostSetWidgetSizes:(id)arg0 ;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setContentReady;
-(void)setFocusableViews:(id)arg0 ;
-(void)setNeedsLargeSize:(BOOL)arg0 animationSettings:(id)arg1 ;


@end


#endif