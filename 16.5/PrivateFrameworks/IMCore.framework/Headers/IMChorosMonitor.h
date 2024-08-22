// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHOROSMONITOR_H
#define IMCHOROSMONITOR_H

@class CTStewieStateMonitor, NSString, CoreTelephonyClient;
@protocol CTStewieStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface IMChorosMonitor : NSObject <CTStewieStateMonitorDelegate>



@property (retain, nonatomic) CTStewieStateMonitor *coreTelephonyStewieMonitor; // ivar: _coreTelephonyStewieMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient


+(id)sharedInstance;
-(BOOL)_activeServicesHasEmergency:(id)arg0 ;
-(BOOL)isStewieActive;
-(BOOL)shouldShowTextEmergencyServicesButton;
-(id)getState;
-(id)init;
-(void)openStewieAppWithCompletion:(id)arg0 ;
-(void)placeEmergencyCallWithCompletion:(id)arg0 ;
-(void)stateChanged:(id)arg0 ;


@end


#endif