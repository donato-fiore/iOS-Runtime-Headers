// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVNEWSWIDGETPLAYERBEHAVIOR_H
#define AVNEWSWIDGETPLAYERBEHAVIOR_H

@class NSString;
@protocol AVBehaviorInternal, AVBehavior;

#import <Foundation/Foundation.h>

#import "AVNewsWidgetPlayerBehaviorContext.h"

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior>



@property (weak, nonatomic) AVNewsWidgetPlayerBehaviorContext *behaviorContext; // ivar: _behaviorContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)playerForContentTransitionType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didCancelContentTransition;
-(void)didCompleteContentTransition;
-(void)didMoveToContext:(id)arg0 ;
-(void)didRemoveFromContext:(id)arg0 ;
-(void)didUpdateContentTransitionProgress:(CGFloat)arg0 ;
-(void)willBeginContentTransition;
-(void)willCancelContentTransition;
-(void)willCompleteContentTransition;
-(void)willMoveToContext:(id)arg0 ;
-(void)willRemoveFromContext:(id)arg0 ;


@end


#endif