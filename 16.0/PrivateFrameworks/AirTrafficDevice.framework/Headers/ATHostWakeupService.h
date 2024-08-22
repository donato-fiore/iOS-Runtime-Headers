// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATHOSTWAKEUPSERVICE_H
#define ATHOSTWAKEUPSERVICE_H

@class NSString;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>


@interface ATHostWakeupService : NSObject <ICEnvironmentMonitorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_wakeupHost:(id)arg0 ;
-(void)environmentMonitorDidChangePower:(id)arg0 ;
-(void)getWakeableHostsWithCompletion:(id)arg0 ;
-(void)sendWakeupToAllHostsWithCompletion:(id)arg0 ;
-(void)sendWakeupToHostWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif