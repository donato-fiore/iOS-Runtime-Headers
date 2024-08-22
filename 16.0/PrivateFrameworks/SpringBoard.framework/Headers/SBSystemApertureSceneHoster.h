// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURESCENEHOSTER_H
#define SBSYSTEMAPERTURESCENEHOSTER_H

@class NSMapTable, NSMutableSet, NSString, SBSSystemApertureSceneCreationRequestServer;
@protocol SBSSystemApertureSceneCreationRequestServerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSystemApertureController.h"

@interface SBSystemApertureSceneHoster : NSObject <SBSSystemApertureSceneCreationRequestServerDelegate, BSInvalidatable>

 {
    NSMapTable *_activeElements;
    NSMutableSet *_pendingElements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSSystemApertureSceneCreationRequestServer *server; // ivar: _server
@property (readonly) Class superclass;
@property (weak, nonatomic) SBSystemApertureController *systemApertureController; // ivar: _systemApertureController


-(void)_addPendingElement:(id)arg0 ;
-(void)_enumerateElementsUsingBlock:(id)arg0 ;
-(void)_invalidateElement:(id)arg0 ;
-(void)_registerElement:(id)arg0 ;
-(void)_removeElement:(id)arg0 ;
-(void)_removePendingElement:(id)arg0 ;
-(void)activateWithSystemApertureController:(id)arg0 ;
-(void)invalidate;
-(void)sceneCreationRequestServer:(id)arg0 didReceiveRequestForSystemApertureSceneWithClientIdentity:(id)arg1 requestIdentifier:(id)arg2 ;


@end


#endif