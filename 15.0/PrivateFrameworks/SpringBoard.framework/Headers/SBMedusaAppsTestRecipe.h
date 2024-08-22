// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSAAPPSTESTRECIPE_H
#define SBMEDUSAAPPSTESTRECIPE_H

@class NSString, FBApplicationUpdateScenesTransaction;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe>

 {
    BOOL _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
}


@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // ivar: _currentTransaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(id)init;
-(id)title;
-(void)_toggle;
-(void)_updateAppsToBringUpFromPreferences;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif