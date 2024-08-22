// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMANAGEDSESSIONDRIVER_H
#define SHMANAGEDSESSIONDRIVER_H

@class NSString, NSUUID;
@protocol SHSessionDriver, SHMatcher><SHMatcherDelegate, SHSessionDriverDelegate;

#import <Foundation/Foundation.h>

#import "SHManagedSessionDriverDaemonDelegate.h"

@interface SHManagedSessionDriver : NSObject <SHSessionDriver>



@property (readonly, nonatomic) SHManagedSessionDriverDaemonDelegate *daemonDelegate; // ivar: _daemonDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *matchingSignatureID;
@property (readonly, nonatomic) NSObject<SHMatcher><SHMatcherDelegate> *serviceConnection; // ivar: _serviceConnection
@property (weak, nonatomic) NSObject<SHSessionDriverDelegate> *sessionDriverDelegate;
@property (readonly) Class superclass;


-(id)initWithServiceConnection:(id)arg0 ;
-(void)flow:(id)arg0 time:(id)arg1 ;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;


@end


#endif