// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTCLIENTREGISTRATIONHELPER_H
#define PPTCLIENTREGISTRATIONHELPER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface PPTClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer; // ivar: _connectionToServer


-(BOOL)permissionsForSubsystem:(id)arg0 category:(id)arg1 ;
-(id)createXPCConnection;
-(void)closeXPCConnection;


@end


#endif