// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORHARNESS_H
#define _UIFINDNAVIGATORHARNESS_H

@class NSString;
@protocol _UIGeometryChangeObserver, _UIFindNavigatorViewControllerDelegate, _UIFindNavigatorHosting;

#import <Foundation/Foundation.h>

#import "_UIFindNavigatorViewController.h"
#import "UIView.h"

@interface _UIFindNavigatorHarness : NSObject <_UIGeometryChangeObserver, _UIFindNavigatorViewControllerDelegate, _UIFindNavigatorHosting>

 {
    BOOL _isHoistingFindNavigator;
    BOOL _interactionViewIsWebView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // ivar: _findNavigatorViewController
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *hostView; // ivar: _hostView
@property (weak, nonatomic) UIView *interactionView; // ivar: _interactionView
@property (readonly) Class superclass;


-(BOOL)_shouldAdjustHostViewContentOffsets;
-(id)_findNavigatorView;
-(id)init;
-(void)_adjustHostViewScrollOffsetToTopIfSupported;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_layoutFindNavigator;
-(void)beginHoistingFindNavigator:(BOOL)arg0 ;
-(void)dealloc;
-(void)dismissFindNavigator;
-(void)endHoistingFindNavigator:(BOOL)arg0 ;
-(void)findNavigatorViewControllerDidRequestDismissal:(id)arg0 ;
-(void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)presentFindNavigatorWithFindSession:(id)arg0 showingReplace:(BOOL)arg1 ;


@end


#endif