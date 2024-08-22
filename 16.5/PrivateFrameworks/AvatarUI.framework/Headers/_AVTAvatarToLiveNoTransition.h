// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AVTAVATARTOLIVENOTRANSITION_H
#define _AVTAVATARTOLIVENOTRANSITION_H

@protocol AVTAvatarTransitionModel;


#import "AVTTransition.h"

@interface _AVTAvatarToLiveNoTransition : AVTTransition

@property (readonly, nonatomic) NSObject<AVTAvatarTransitionModel> *avatarTransitionModel; // ivar: _avatarTransitionModel


// -(id)initWithModel:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 logger:(unk)arg3  ;
-(id)model;
-(void)_startTransition;


@end


#endif