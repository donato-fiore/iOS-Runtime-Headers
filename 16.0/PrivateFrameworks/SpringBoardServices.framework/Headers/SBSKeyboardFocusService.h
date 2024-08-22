// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSKEYBOARDFOCUSSERVICE_H
#define SBSKEYBOARDFOCUSSERVICE_H

@class BSServiceConnection, NSString;
@protocol SBSKeyboardFocusServiceServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSKeyboardFocusService : NSObject <SBSKeyboardFocusServiceServerToClientInterface>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)systemKeyCommandOverlayEnvironment;
-(id)_connection;
-(id)applyAdditionalDeferringRules:(id)arg0 whenSceneHasKeyboardFocus:(id)arg1 processID:(int)arg2 ;
-(void)dealloc;
-(void)removeKeyboardFocusFromSceneIdentity:(id)arg0 processID:(int)arg1 ;
-(void)requestKeyboardFocusForSceneIdentity:(id)arg0 processID:(int)arg1 completion:(id)arg2 ;


@end


#endif