// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTCONTROL_H
#define HKWORKOUTCONTROL_H

@class NSString;
@protocol _HKXPCExportable, HKWorkoutControlClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKWorkoutControl : NSObject <_HKXPCExportable, HKWorkoutControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)finishAllWorkoutsWithCompletion:(id)arg0 ;
-(void)generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 completion:(id)arg2 ;
-(void)generatePauseOrResumeRequest:(id)arg0 ;
-(void)generateWorkoutMarkerWithCompletion:(id)arg0 ;


@end


#endif