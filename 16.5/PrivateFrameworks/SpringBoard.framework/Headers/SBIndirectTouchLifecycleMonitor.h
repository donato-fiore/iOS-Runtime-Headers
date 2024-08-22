// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINDIRECTTOUCHLIFECYCLEMONITOR_H
#define SBINDIRECTTOUCHLIFECYCLEMONITOR_H

@class NSString, UIHoverGestureRecognizer, NSHashTable;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface SBIndirectTouchLifecycleMonitor : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // ivar: _hoverGestureRecognizer
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithSystemGestureManager:(id)arg0 ;
-(struct CGPoint )systemGestureHoverLocationInView:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)handleHoverEvent:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif