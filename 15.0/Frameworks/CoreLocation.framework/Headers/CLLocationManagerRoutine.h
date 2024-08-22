// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONMANAGERROUTINE_H
#define CLLOCATIONMANAGERROUTINE_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>

#import "_CLLocationManagerRoutineProxy.h"

@interface CLLocationManagerRoutine : NSObject

@property (nonatomic) NSObject<CLLocationManagerDelegate> *delegate;
@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy; // ivar: _locationManagerRoutineProxy


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;


@end


#endif