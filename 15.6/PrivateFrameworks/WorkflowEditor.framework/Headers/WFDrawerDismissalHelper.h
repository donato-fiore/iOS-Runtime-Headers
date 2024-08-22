// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDRAWERDISMISSALHELPER_H
#define WFDRAWERDISMISSALHELPER_H

@class NSHashTable, UIScrollView;
@protocol WFDrawerDismissalHelperDelegate;

#import <Foundation/Foundation.h>

#import "WFDrawerDismissalPanMediator.h"

@interface WFDrawerDismissalHelper : NSObject

@property (retain, nonatomic) NSHashTable *activeGestureRecognizers; // ivar: _activeGestureRecognizers
@property (nonatomic) CGFloat currentInsideness; // ivar: _currentInsideness
@property (weak, nonatomic) NSObject<WFDrawerDismissalHelperDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didDismiss; // ivar: _didDismiss
@property (nonatomic) CGFloat dismissalRectTopEdge; // ivar: _dismissalRectTopEdge
@property (retain, nonatomic) WFDrawerDismissalPanMediator *panMediator; // ivar: _panMediator
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(CGFloat)insidenessForGestureRecognizer:(id)arg0 ;
-(id)initWithScrollView:(id)arg0 ;
-(void)dealloc;
-(void)dismissCardWithPanGestureRecognizer:(id)arg0 ;
-(void)dismissCardWithVelocity:(CGFloat)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)panGestureDidChange:(id)arg0 ;
-(void)panGestureRecognizerDidBegin:(id)arg0 ;
-(void)panGestureRecognizerDidEnd:(id)arg0 ;


@end


#endif