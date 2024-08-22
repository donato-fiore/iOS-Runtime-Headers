// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTATUSBARFORCEDHIDDENTESTRECIPE_H
#define SBSTATUSBARFORCEDHIDDENTESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBStatusBarForcedHiddenTestRecipe : NSObject <SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(id)title;
-(void)_toggleWithAnimationSettings:(id)arg0 ;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif