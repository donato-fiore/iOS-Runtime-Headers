// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENEREMNANT_H
#define FBSCENEREMNANT_H

@class FBSSceneParameters, BSAtomicSignal, BSSimpleAssertion, FBSSceneClientSettings, NSString, FBSSceneDefinition, FBSSceneSettings;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBWorkspace.h"

@interface FBSceneRemnant : NSObject <BSInvalidatable>

 {
    FBSSceneParameters *_parameters;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    BSAtomicSignal *_invalidated;
}


@property (readonly, nonatomic) BSSimpleAssertion *_assertion; // ivar: _assertion
@property (readonly, copy, nonatomic) FBSSceneClientSettings *_clientSettings;
@property (readonly, nonatomic, getter=_hasBeenInvalidated) BOOL _invalidated;
@property (readonly, weak, nonatomic) FBWorkspace *_workspace; // ivar: _workspace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBSSceneSettings *lastSettings;
@property (readonly) Class superclass;


-(id)_initWithIdentity:(id)arg0 client:(id)arg1 workspace:(id)arg2 parameters:(id)arg3 assertionQueue:(id)arg4 assertion:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif