// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21SIRIINFORMATIONSEARCH21POMMESLOCATIONMANAGER_H
#define _TTC21SIRIINFORMATIONSEARCH21POMMESLOCATIONMANAGER_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch21PommesLocationManager : NSObject <CLLocationManagerDelegate>

 {
    ? status;
    ? manager;
}




-(id)init;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif