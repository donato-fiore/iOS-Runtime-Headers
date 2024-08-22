// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC7COREODI17ODILOCATIONHELPERP33_C11C96CF10029B901485F256BEA33A528DELEGATE_H
#define _TTCC7COREODI17ODILOCATIONHELPERP33_C11C96CF10029B901485F256BEA33A528DELEGATE_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC7CoreODI17ODILocationHelperP33_C11C96CF10029B901485F256BEA33A528Delegate : NSObject <CLLocationManagerDelegate>

 {
    ? logger;
    ? parent;
}




-(id)init;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif