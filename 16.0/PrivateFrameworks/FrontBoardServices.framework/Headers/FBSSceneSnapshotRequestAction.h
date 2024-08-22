// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSSCENESNAPSHOTREQUESTACTION_H
#define FBSSCENESNAPSHOTREQUESTACTION_H

@class BSAction;


#import "FBSSceneSnapshotContext.h"

@interface FBSSceneSnapshotRequestAction : BSAction

@property (readonly, nonatomic) FBSSceneSnapshotContext *context;
@property (readonly, nonatomic) NSUInteger type;


-(id)_initWithType:(NSUInteger)arg0 context:(id)arg1 responder:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif