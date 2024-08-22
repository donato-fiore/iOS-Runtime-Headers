// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLEMERGENCYLOCATIONSELECTOR_H
#define CLEMERGENCYLOCATIONSELECTOR_H

@class NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface CLEmergencyLocationSelector : NSObject <CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)stopSession;


@end


#endif