// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SIRIGEO18LOCATIONCONTROLLER_H
#define _TTC7SIRIGEO18LOCATIONCONTROLLER_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7SiriGeo18LocationController : NSObject <CLLocationManagerDelegate>

 {
    ? locationManager;
    ? completion;
    ? logObject;
}




-(id)init;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif