// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMOTIONCONTEXT_H
#define GEOMOTIONCONTEXT_H

@class NSString;
@protocol GEOMotionContextProviderDelegate, GEOMotionContextProvider, GEOMotionContextDelegate;

#import <Foundation/Foundation.h>


@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate>

 {
    id<GEOMotionContextProvider> *_provider;
}


@property (readonly, nonatomic) NSUInteger confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOMotionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger exitType; // ivar: _exitType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCycling;
@property (readonly, nonatomic) BOOL isDriving;
@property (readonly, nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isWalking;
@property (readonly, nonatomic) NSUInteger motionType; // ivar: _motionType
@property (readonly) Class superclass;


-(void)dealloc;
-(void)motionContextProvider:(id)arg0 didUpdateMotion:(NSUInteger)arg1 exitType:(NSUInteger)arg2 confidence:(NSUInteger)arg3 ;
-(void)startMotionUpdatesWithProvider:(id)arg0 ;
-(void)stopMotionUpdates;


@end


#endif