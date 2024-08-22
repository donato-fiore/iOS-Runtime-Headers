// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCHAMOISDISPLAYPROTOTYPECONTROLLER_H
#define SBCHAMOISDISPLAYPROTOTYPECONTROLLER_H

@class FBSDisplayIdentity, FBSDisplayConfiguration, FBSDisplayMonitor, NSString;
@protocol FBSDisplayObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBChamoisDisplayPrototypeController : NSObject <FBSDisplayObserving>

 {
    FBSDisplayIdentity *_activeDisplayIdentity;
    FBSDisplayConfiguration *_activeDisplayConfiguration;
    FBSDisplayMonitor *_displayMonitor;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_caEnvironmentVariablesForDisplayConfiguration:(id)arg0 ;
-(id)_xpcQueue_currentCAEnvironmentVariables;
-(id)_xpcQueue_environmentValueForKey:(id)arg0 ;
-(id)initWithDisplayMonitor:(id)arg0 ;
-(void)_updateState;
-(void)_xpcQueue_setValuesForEnvironmentVariables:(id)arg0 ;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;


@end


#endif