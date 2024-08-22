// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENEMANAGERREFERENCE_H
#define SBSCENEMANAGERREFERENCE_H

@class NSMutableSet, NSString, FBSDisplayIdentity;
@protocol BSDebugDescriptionProviding, SBSceneManagerReferenceDelegate;

#import <Foundation/Foundation.h>

#import "SBSceneManager.h"

@interface SBSceneManagerReference : NSObject <BSDebugDescriptionProviding>

 {
    id<SBSceneManagerReferenceDelegate> *_delegate;
    SBSceneManager *_manager;
    SBSceneManager *_weak_manager;
    BOOL _managerWasValid;
    BOOL _displayIsConnected;
    NSMutableSet *_retainingScenes;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDefunct;
-(BOOL)isRetaining;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)manager;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_autoreleaseManager:(id)arg0 ;
-(void)_updateRetainWithBlock:(id)arg0 ;
-(void)invalidate;
-(void)releaseForScene:(id)arg0 ;
-(void)retainForScene:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDisplayIsConnected:(BOOL)arg0 ;
-(void)setManager:(id)arg0 ;


@end


#endif