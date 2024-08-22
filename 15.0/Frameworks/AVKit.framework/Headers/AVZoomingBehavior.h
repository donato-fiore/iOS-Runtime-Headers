// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVZOOMINGBEHAVIOR_H
#define AVZOOMINGBEHAVIOR_H

@class NSString;
@protocol AVBehaviorInternal, AVBehavior;

#import <Foundation/Foundation.h>

#import "AVZoomingBehaviorContext.h"

@interface AVZoomingBehavior : NSObject <AVBehaviorInternal, AVBehavior>



@property (weak, nonatomic) AVZoomingBehaviorContext *behaviorContext; // ivar: _behaviorContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didMoveToContext:(id)arg0 ;
-(void)didRemoveFromContext:(id)arg0 ;
-(void)willMoveToContext:(id)arg0 ;
-(void)willRemoveFromContext:(id)arg0 ;


@end


#endif