// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCONNECTIONAVAILABILITYOBSERVER_H
#define AFCONNECTIONAVAILABILITYOBSERVER_H

@class NSString;
@protocol AFNetworkAvailabilityObserver;

#import <Foundation/Foundation.h>


@interface AFConnectionAvailabilityObserver : NSObject <AFNetworkAvailabilityObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)networkAvailability:(id)arg0 isAvailable:(BOOL)arg1 ;


@end


#endif