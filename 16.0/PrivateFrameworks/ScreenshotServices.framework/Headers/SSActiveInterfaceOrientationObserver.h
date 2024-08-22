// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSACTIVEINTERFACEORIENTATIONOBSERVER_H
#define SSACTIVEINTERFACEORIENTATIONOBSERVER_H

@class NSString;
@protocol SBUIActiveOrientationObserver, SSActiveInterfaceOrientationObserverDelegate;

#import <Foundation/Foundation.h>


@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSActiveInterfaceOrientationObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_sbUIUserAgent;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(NSInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)_registerForActiveInterfaceOrientationChanges;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)beginObserving;
-(void)stopObserving;


@end


#endif