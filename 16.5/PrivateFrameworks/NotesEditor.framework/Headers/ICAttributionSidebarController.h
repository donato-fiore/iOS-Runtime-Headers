// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONSIDEBARCONTROLLER_H
#define ICATTRIBUTIONSIDEBARCONTROLLER_H

@class NSNumber, NSDate, ICNAEventReporter, TTTextEditFilter, UIPanGestureRecognizer;

#import <Foundation/Foundation.h>

#import "ICAttributionSidebarView.h"
#import "ICTextViewController.h"

@interface ICAttributionSidebarController : NSObject

@property (nonatomic) CGFloat attributionSidebarGestureAcceptedDistanceX; // ivar: _attributionSidebarGestureAcceptedDistanceX
@property (retain, nonatomic) NSNumber *attributionSidebarGestureBaselineContentOffsetY; // ivar: _attributionSidebarGestureBaselineContentOffsetY
@property (nonatomic) CGFloat attributionSidebarGestureBaselineX; // ivar: _attributionSidebarGestureBaselineX
@property (nonatomic) BOOL attributionSidebarGestureHasBegunToOpen; // ivar: _attributionSidebarGestureHasBegunToOpen
@property (nonatomic) CGFloat attributionSidebarGestureIgnoredDistanceX; // ivar: _attributionSidebarGestureIgnoredDistanceX
@property (retain, nonatomic) NSDate *attributionSidebarGestureStartTime; // ivar: _attributionSidebarGestureStartTime
@property (readonly, nonatomic) ICAttributionSidebarView *attributionSidebarView;
@property (readonly, nonatomic) NSInteger attributionSidebarVisibility;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;
@property (copy, nonatomic) TTTextEditFilter *filter;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) ICTextViewController *textViewController; // ivar: _textViewController


+(id)keyPathsForValuesAffectingAttributionSidebarVisibility;
-(id)init;
-(void)cancelActiveGestures;
-(void)dealloc;
-(void)handlePanGesture:(id)arg0 ;
-(void)hideSidebarAnimated:(BOOL)arg0 ;
-(void)hideSidebarAnimated:(BOOL)arg0 contextPath:(NSInteger)arg1 ;
-(void)noteDidUpdateShare:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)showSidebarAnimated:(BOOL)arg0 ;


@end


#endif