// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSAFELOCATIONMANAGERDELEGATE_H
#define SLSAFELOCATIONMANAGERDELEGATE_H

@class NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CLLocationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif