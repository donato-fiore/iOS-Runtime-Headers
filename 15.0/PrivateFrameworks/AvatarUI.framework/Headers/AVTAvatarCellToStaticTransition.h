// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARCELLTOSTATICTRANSITION_H
#define AVTAVATARCELLTOSTATICTRANSITION_H

@protocol AVTAvatarTransitionModel;


#import "AVTTransition.h"

@interface AVTAvatarCellToStaticTransition : AVTTransition

@property (readonly, nonatomic) NSObject<AVTAvatarTransitionModel> *avatarTransitionModel; // ivar: _avatarTransitionModel


// -(id)initWithModel:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 logger:(unk)arg3  ;
-(id)model;
-(void)performTransition;


@end


#endif