// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATINGAPPLICATIONTESTRECIPE_H
#define SBFLOATINGAPPLICATIONTESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe>

 {
    NSUInteger _mode;
    BOOL _addSide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)title;
-(void)_perform;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif