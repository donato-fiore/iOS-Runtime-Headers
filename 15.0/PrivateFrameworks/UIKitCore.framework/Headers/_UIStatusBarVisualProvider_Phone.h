// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_PHONE_H
#define _UISTATUSBARVISUALPROVIDER_PHONE_H

@class iOS, NSString;
@protocol _UIStatusBarPillRegionVisualProvider;


#import "_UIStatusBarVisualProvider_PillRegionCoordinator.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_Phone : iOS <_UIStatusBarPillRegionVisualProvider>



@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator; // ivar: _pillRegionCoordinator
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;


+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)init;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)willUpdateWithData:(id)arg0 ;
-(void)actionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;


@end


#endif