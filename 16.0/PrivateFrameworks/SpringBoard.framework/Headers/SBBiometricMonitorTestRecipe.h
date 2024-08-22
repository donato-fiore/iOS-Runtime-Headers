// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBIOMETRICMONITORTESTRECIPE_H
#define SBBIOMETRICMONITORTESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBBiometricMonitorUI.h"
#import "SBBiometricMonitorTestRecipeDummyDataSource.h"
#import "SBWindowScene.h"

@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe>

 {
    SBBiometricMonitorUI *_monitorUI;
    SBBiometricMonitorTestRecipeDummyDataSource *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)windowSceneDidUpdate:(id)arg0 ;


@end


#endif