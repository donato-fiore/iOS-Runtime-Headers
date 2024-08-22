// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFSPRINGLOADEDINTERACTIONBEHAVIOR_H
#define SBFSPRINGLOADEDINTERACTIONBEHAVIOR_H

@class NSString;
@protocol UISpringLoadedInteractionBehavior, SBFSpringLoadedInteractionBehaviorDelegate;

#import <Foundation/Foundation.h>


@interface SBFSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFSpringLoadedInteractionBehaviorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;
-(void)interactionDidFinish:(id)arg0 ;


@end


#endif