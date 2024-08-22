// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISLIVEPHOTOSETTLEBEHAVIOR_H
#define ISLIVEPHOTOSETTLEBEHAVIOR_H

@protocol ISLivePhotoSettleBehaviorDelegate;


#import "ISBehavior.h"

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) NSObject<ISLivePhotoSettleBehaviorDelegate> *delegate;


-(NSInteger)behaviorType;
-(void)_didFinish;
-(void)settle:(BOOL)arg0 ;


@end


#endif