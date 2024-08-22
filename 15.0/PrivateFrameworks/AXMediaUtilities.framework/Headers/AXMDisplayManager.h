// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDISPLAYMANAGER_H
#define AXMDISPLAYMANAGER_H

@class NSString, FBSDisplayMonitor;
@protocol FBSDisplayObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXMDisplay.h"

@interface AXMDisplayManager : NSObject <FBSDisplayObserving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    BOOL _initialized;
}


@property (readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor; // ivar: _displayMonitor
@property (readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInitialized;
@property (nonatomic) CGFloat mobileGestaltOrientation; // ivar: _mobileGestaltOrientation
@property (readonly) Class superclass;


-(NSInteger)_discreteOrientationForOrientation:(CGFloat)arg0 ;
-(id)_displayPropertiesFromMobileGestalt;
-(id)initAndWaitForMainDisplayConfiguration;
-(id)initWithCompletion:(id)arg0 ;
-(void)_updateDisplay:(id)arg0 withCADisplay:(id)arg1 ;
-(void)_updateDisplay:(id)arg0 withConfiguration:(id)arg1 ;
-(void)_updateDisplayPropertiesWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;


@end


#endif