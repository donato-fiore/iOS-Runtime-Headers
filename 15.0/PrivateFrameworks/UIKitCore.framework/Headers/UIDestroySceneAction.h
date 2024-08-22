// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDESTROYSCENEACTION_H
#define UIDESTROYSCENEACTION_H

@class BSAction, NSSet;



@interface UIDestroySceneAction : BSAction

@property (readonly, nonatomic) BOOL destroySceneSession;
@property (readonly, nonatomic) NSSet *persistedIdentifiers;
@property (readonly, nonatomic) NSUInteger preferredAnimationType;


-(NSInteger)UIActionType;
-(id)initWithPersistedIdentifiers:(id)arg0 preferredAnimationType:(NSUInteger)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(id)initWithPersistedIdentifiers:(id)arg0 preferredAnimationType:(NSUInteger)arg1 forDestroyingSession:(BOOL)arg2 callbackQueue:(id)arg3 completion:(id)arg4 ;
-(id)initWithPreferredAnimationType:(NSUInteger)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif