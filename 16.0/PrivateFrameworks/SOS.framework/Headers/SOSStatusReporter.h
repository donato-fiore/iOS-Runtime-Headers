// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSSTATUSREPORTER_H
#define SOSSTATUSREPORTER_H

@class NSXPCConnection, NSString;
@protocol SOSStatusManagerClientProtocol;

#import <Foundation/Foundation.h>


@interface SOSStatusReporter : NSObject <SOSStatusManagerClientProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) int connectionRequestNotificationToken; // ivar: _connectionRequestNotificationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger flowState; // ivar: _flowState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_updateSOSFlowState;
-(void)handleSosdLaunch;
-(void)updateSOSFlowState:(NSInteger)arg0 ;


@end


#endif