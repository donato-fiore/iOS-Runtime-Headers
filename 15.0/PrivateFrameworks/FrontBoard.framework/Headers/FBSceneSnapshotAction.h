// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENESNAPSHOTACTION_H
#define FBSCENESNAPSHOTACTION_H

@class FBSSceneSnapshotAction, RBSAssertion, NSString;



@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {
    RBSAssertion *_assertion;
}


@property (readonly, nonatomic) NSString *sceneID; // ivar: _sceneID


-(id)initWithScene:(id)arg0 requests:(id)arg1 expirationInterval:(CGFloat)arg2 responseHandler:(id)arg3 ;
-(void)dealloc;


@end


#endif