// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVEDITBEHAVIOR_H
#define AVEDITBEHAVIOR_H

@class NSString;
@protocol AVBehaviorInternal, AVBehavior, AVEditBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "AVEditBehaviorContext.h"

@interface AVEditBehavior : NSObject <AVBehaviorInternal, AVBehavior>



@property (weak, nonatomic) AVEditBehaviorContext *behaviorContext; // ivar: _behaviorContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVEditBehaviorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didMoveToContext:(id)arg0 ;
-(void)didRemoveFromContext:(id)arg0 ;
-(void)willMoveToContext:(id)arg0 ;
-(void)willRemoveFromContext:(id)arg0 ;


@end


#endif