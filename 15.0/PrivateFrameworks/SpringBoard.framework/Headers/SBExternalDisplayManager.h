// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBEXTERNALDISPLAYMANAGER_H
#define SBEXTERNALDISPLAYMANAGER_H

@class FBSDisplayMonitor, FBSDisplayLayoutPublisher, NSMutableDictionary, NSMutableSet, NSString;
@protocol FBSDisplayObserving, SBFAuthenticationStatusProvider;

#import <Foundation/Foundation.h>

#import "SBMainWorkspace.h"
#import "SBMainDisplaySceneManager.h"

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving>

 {
    FBSDisplayMonitor *_displayMonitor;
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationStatusProvider> *_userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayLayoutPublisher *_layoutPublisher;
    NSMutableDictionary *_displayToControllerMap;
    NSMutableSet *_disconnectingDisplays;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDisplayMonitor:(id)arg0 mainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainSceneManager:(id)arg3 ;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;


@end


#endif