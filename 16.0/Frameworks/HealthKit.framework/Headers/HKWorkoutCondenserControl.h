// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTCONDENSERCONTROL_H
#define HKWORKOUTCONDENSERCONTROL_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKWorkoutCondenserControl : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serverInterface;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)condensableWorkoutsWithCompletion:(id)arg0 ;
-(void)condenseWorkoutWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)condenseWorkoutsForReason:(NSInteger)arg0 workoutBatchLimit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)condensedWorkoutsWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;


@end


#endif