// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDAEMONCONTEXT_H
#define SBDAEMONCONTEXT_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SBDaemonContext : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}




-(id)_newDispatchSourceForPid:(int)arg0 queue:(id)arg1 ;
-(id)description;
-(id)initWithPid:(int)arg0 queue:(id)arg1 ;
-(int)pid;
-(void)_handleCancelation;
-(void)addRequest:(id)arg0 forKey:(id)arg1 ;
-(void)removeRequestForKey:(id)arg0 ;


@end


#endif