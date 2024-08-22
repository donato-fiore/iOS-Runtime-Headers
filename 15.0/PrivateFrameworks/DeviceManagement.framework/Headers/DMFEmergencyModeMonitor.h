// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFEMERGENCYMODEMONITOR_H
#define DMFEMERGENCYMODEMONITOR_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface DMFEmergencyModeMonitor : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)remoteInterface;
+(id)sharedMonitor;
-(BOOL)disableEmergencyModeWithError:(*id)arg0 ;
-(BOOL)enableEmergencyModeForDuration:(CGFloat)arg0 withError:(*id)arg1 ;
-(BOOL)enableEmergencyModeWithError:(*id)arg0 ;
-(id)emergencyModeStatusWithError:(*id)arg0 ;
-(id)init;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;
-(void)emergencyModeStatusWithCompletionHandler:(id)arg0 ;


@end


#endif