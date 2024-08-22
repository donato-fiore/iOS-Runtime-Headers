// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNCOREMOTIONCONTEXTPROVIDER_H
#define MNCOREMOTIONCONTEXTPROVIDER_H

@class CMActivityManager, NSString;
@protocol GEOMotionContextProvider, GEOMotionContextProviderDelegate;

#import <Foundation/Foundation.h>

#import "MNTraceRecorder.h"

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider>

 {
    CMActivityManager *_activityManager;
    MNTraceRecorder *_traceRecorder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<GEOMotionContextProviderDelegate> *motionDelegate; // ivar: _delegate
@property (readonly) Class superclass;


-(id)initWithTraceRecorder:(id)arg0 ;
-(void)dealloc;
-(void)startMotionUpdates;
-(void)stopMotionUpdates;


@end


#endif