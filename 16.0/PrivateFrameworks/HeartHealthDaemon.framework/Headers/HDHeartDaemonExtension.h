// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEARTDAEMONEXTENSION_H
#define HDHEARTDAEMONEXTENSION_H

@class NSUserDefaults, NSString;
@protocol HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler, HDHealthDaemonExtension, HDHealthDaemon;

#import <Foundation/Foundation.h>


@interface HDHeartDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler, HDHealthDaemonExtension>

 {
    id<HDHealthDaemon> *_healthDaemon;
    NSUserDefaults *_heartNotificationsUserDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHealthDaemon:(id)arg0 heartNotificationsUserDefaults:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)performPostInstallUpdateTaskForManager:(id)arg0 completion:(id)arg1 ;


@end


#endif