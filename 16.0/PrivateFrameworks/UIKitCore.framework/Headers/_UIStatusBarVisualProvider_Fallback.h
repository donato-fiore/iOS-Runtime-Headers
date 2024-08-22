// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_FALLBACK_H
#define _UISTATUSBARVISUALPROVIDER_FALLBACK_H

@class UIFont, NSString, NSArray;
@protocol _UIStatusBarVisualProvider;

#import <Foundation/Foundation.h>

#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider>



@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *placements; // ivar: _placements
@property (weak, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;


+(BOOL)requiresIterativeOverflowLayout;
+(BOOL)scalesWithScreenNativeScale;
+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;


@end


#endif