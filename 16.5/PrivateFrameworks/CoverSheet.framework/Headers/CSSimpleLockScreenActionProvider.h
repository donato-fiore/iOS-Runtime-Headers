// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIMPLELOCKSCREENACTIONPROVIDER_H
#define CSSIMPLELOCKSCREENACTIONPROVIDER_H

@class NSString, SBFLockScreenActionContext;
@protocol SBLockScreenActionProvider;

#import <Foundation/Foundation.h>


@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBFLockScreenActionContext *lockScreenActionContext; // ivar: _lockScreenActionContext
@property (readonly) Class superclass;


-(void)invalidateLockScreenActionContext;


@end


#endif