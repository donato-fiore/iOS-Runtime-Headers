// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEWATCHDOGPROVIDER_H
#define SBSCENEWATCHDOGPROVIDER_H

@class FBApplicationProcessWatchdogPolicy, NSString;
@protocol FBProcessWatchdogProviding;

#import <Foundation/Foundation.h>


@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding>

 {
    BOOL _watchdogDisabled;
    FBApplicationProcessWatchdogPolicy *_defaultProcessWatchdogProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultSceneWatchdogProvider;
+(id)disabledSceneWatchdogProvider;
-(id)_scaleProvisions:(id)arg0 byFactor:(CGFloat)arg1 ;
-(id)initAsDisabled:(BOOL)arg0 ;
-(id)watchdogPolicyForProcess:(id)arg0 eventContext:(id)arg1 ;


@end


#endif