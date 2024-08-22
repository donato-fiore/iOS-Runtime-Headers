// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLSCENEUPDATEWORKSPACETRANSACTION_H
#define SBINCALLSCENEUPDATEWORKSPACETRANSACTION_H



#import "SBMainWorkspaceTransaction.h"
#import "SBApplicationSceneEntity.h"

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}


@property (copy, nonatomic) id *postSceneUpdateHandler; // ivar: _postSceneUpdateHandler


-(id)initWithApplicationSceneEntity:(id)arg0 transitionRequest:(id)arg1 ;
-(void)_begin;


@end


#endif