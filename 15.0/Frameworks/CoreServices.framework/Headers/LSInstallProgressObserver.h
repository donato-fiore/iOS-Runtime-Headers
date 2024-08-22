// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSINSTALLPROGRESSOBSERVER_H
#define LSINSTALLPROGRESSOBSERVER_H

@class NSXPCConnection, NSString;
@protocol LSInstallProgressProtocol;

#import <Foundation/Foundation.h>


@interface LSInstallProgressObserver : NSObject <LSInstallProgressProtocol>



@property (weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)_lsPing:(id)arg0 reply:(id)arg1 ;
-(void)addObserver;
-(void)createInstallProgressForApplication:(id)arg0 withPhase:(NSUInteger)arg1 andPublishingString:(id)arg2 reply:(id)arg3 ;
-(void)installationEndedForApplication:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)installationFailedForApplication:(id)arg0 reply:(id)arg1 ;
-(void)removeObserver;
-(void)sendNotification:(int)arg0 forApplications:(id)arg1 withPlugins:(BOOL)arg2 ;


@end


#endif