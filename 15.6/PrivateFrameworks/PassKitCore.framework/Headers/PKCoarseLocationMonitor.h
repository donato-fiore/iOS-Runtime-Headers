// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOARSELOCATIONMONITOR_H
#define PKCOARSELOCATIONMONITOR_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
}


@property (readonly, nonatomic) BOOL coarseLocationEnabled; // ivar: _coarseLocationEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif