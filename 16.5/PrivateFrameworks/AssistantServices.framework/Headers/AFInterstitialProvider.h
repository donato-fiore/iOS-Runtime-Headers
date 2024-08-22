// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFINTERSTITIALPROVIDER_H
#define AFINTERSTITIALPROVIDER_H

@class NSMutableArray, NSString;
@protocol AFInvalidating, OS_dispatch_queue, AFInterstitialProviderDelegate;

#import <Foundation/Foundation.h>

#import "AFInterstitialConfiguration.h"

@interface AFInterstitialProvider : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id *_context;
    id<AFInterstitialProviderDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 recordRoute:(id)arg1 isVoiceTrigger:(BOOL)arg2 isDucking:(BOOL)arg3 isTwoShot:(BOOL)arg4 speechEndHostTime:(NSUInteger)arg5 context:(id)arg6 delegate:(id)arg7 ;
-(id)initWithStyle:(NSInteger)arg0 recordRoute:(id)arg1 isVoiceTrigger:(BOOL)arg2 isDucking:(BOOL)arg3 isTwoShot:(BOOL)arg4 speechEndHostTime:(NSUInteger)arg5 context:(id)arg6 preferences:(id)arg7 delegate:(id)arg8 ;
-(void)_invalidate;
-(void)_performNextActionWithExpectedDelay:(CGFloat)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif