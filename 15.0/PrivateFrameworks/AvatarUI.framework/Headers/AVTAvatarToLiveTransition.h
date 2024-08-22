// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARTOLIVETRANSITION_H
#define AVTAVATARTOLIVETRANSITION_H

@protocol AVTAvatarTransitionModel;


#import "AVTTransition.h"

@interface AVTAvatarToLiveTransition : AVTTransition

@property (readonly, nonatomic) NSObject<AVTAvatarTransitionModel> *avatarTransitionModel; // ivar: _avatarTransitionModel


// -(id)initWithModel:(id)arg0 animated:(BOOL)arg1 setupHandler:(id)arg2 completionHandler:(unk)arg3 logger:(id)arg4  ;
-(id)model;
-(void)performTransition;


@end


#endif