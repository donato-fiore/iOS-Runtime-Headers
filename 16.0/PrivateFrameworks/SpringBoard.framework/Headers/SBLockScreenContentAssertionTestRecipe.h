// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENCONTENTASSERTIONTESTRECIPE_H
#define SBLOCKSCREENCONTENTASSERTIONTESTRECIPE_H

@class SBSLockScreenRemoteContentAssertion, NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBLockScreenContentAssertionTestRecipe : NSObject <SBTestRecipe>

 {
    SBSLockScreenRemoteContentAssertion *_currentAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif