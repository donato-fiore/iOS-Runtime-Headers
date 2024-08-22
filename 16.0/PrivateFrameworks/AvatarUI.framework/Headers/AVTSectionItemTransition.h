// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSECTIONITEMTRANSITION_H
#define AVTSECTIONITEMTRANSITION_H

@protocol AVTSectionItemTransitionModel;


#import "AVTTransition.h"

@interface AVTSectionItemTransition : AVTTransition

@property (readonly, nonatomic) NSObject<AVTSectionItemTransitionModel> *sectionItemTransitionModel; // ivar: _sectionItemTransitionModel


// -(id)initWithModel:(id)arg0 animated:(BOOL)arg1 setupHandler:(id)arg2 completionHandler:(unk)arg3 logger:(id)arg4  ;
-(id)model;
-(void)performTransition;


@end


#endif