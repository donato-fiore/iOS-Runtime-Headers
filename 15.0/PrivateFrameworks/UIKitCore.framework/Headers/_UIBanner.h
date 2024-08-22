// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBANNER_H
#define _UIBANNER_H

@class NSString, NSMutableArray, NSLayoutConstraint;
@protocol _UIBanner;

#import <Foundation/Foundation.h>

#import "_UIBannerContent.h"
#import "_UIBannerManager.h"
#import "_UIBannerView.h"

@interface _UIBanner : NSObject <_UIBanner>



@property (retain, nonatomic) _UIBannerContent *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *dismissalAnimations; // ivar: _dismissalAnimations
@property (retain, nonatomic) NSMutableArray *dismissalCompletionHandlers; // ivar: _dismissalCompletionHandlers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *hiddenConstraint; // ivar: _hiddenConstraint
@property (weak, nonatomic) _UIBannerManager *manager; // ivar: _manager
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *tapHandlers; // ivar: _tapHandlers
@property (retain, nonatomic) _UIBannerView *view; // ivar: _view
@property (retain, nonatomic) NSLayoutConstraint *visibleConstraint; // ivar: _visibleConstraint


-(void)addDismissalAnimations:(id)arg0 ;
-(void)addDismissalCompletionHandler:(id)arg0 ;
-(void)addTapHandler:(id)arg0 ;
-(void)dismiss;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)present;


@end


#endif