// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENEPROPOSALACTION_H
#define UISCENEPROPOSALACTION_H

@class BSAction, NSString;



@interface UISceneProposalAction : BSAction

@property (readonly, copy, nonatomic) BSAction *action;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;


-(NSInteger)UIActionType;
-(id)initWithPersistentIdentifier:(id)arg0 action:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithSceneIdentifier:(id)arg0 action:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif