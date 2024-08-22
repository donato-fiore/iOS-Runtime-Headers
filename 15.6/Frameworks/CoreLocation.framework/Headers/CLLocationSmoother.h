// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLLOCATIONSMOOTHER_H
#define CLLOCATIONSMOOTHER_H

@protocol CLLocationManagerDelegateInternal;

#import <Foundation/Foundation.h>

#import "_CLLocationSmootherProxy.h"

@interface CLLocationSmoother : NSObject {
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;
}


@property (nonatomic) NSObject<CLLocationManagerDelegateInternal> *delegate;
@property (readonly, retain, nonatomic) _CLLocationSmootherProxy *locationManagerSmootherProxy;


-(void)dealloc;
-(void)smoothLocations:(id)arg0 ;
-(void)smoothLocations:(id)arg0 handler:(id)arg1 ;
-(void)smoothLocations:(id)arg0 workoutActivityType:(NSUInteger)arg1 handler:(id)arg2 ;


@end


#endif