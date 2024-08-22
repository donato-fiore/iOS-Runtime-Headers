// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVINJECTEDSCENETOKEN_H
#define UVINJECTEDSCENETOKEN_H

@class NSString, FBScene;
@protocol FBSceneObserver;

#import <Foundation/Foundation.h>


@interface UVInjectedSceneToken : NSObject <FBSceneObserver>

 {
    BOOL _invalidated;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly) Class superclass;


+(id)injectInRunningTarget:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkout;
-(id)_initWithScene:(id)arg0 forBundleID:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)relinquish;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif