// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESENTSESSIONUIRECIPE_H
#define SBPRESENTSESSIONUIRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBPresentSessionUIRecipe : NSObject <SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif