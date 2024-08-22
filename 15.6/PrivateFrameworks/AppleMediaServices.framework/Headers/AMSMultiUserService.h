// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMULTIUSERSERVICE_H
#define AMSMULTIUSERSERVICE_H

@class NSString;
@protocol AMSMachService;

#import <Foundation/Foundation.h>


@interface AMSMultiUserService : NSObject <AMSMachService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isConnectionEntitled:(id)arg0 ;
+(id)_createXPCConnection;
+(id)machServiceName;
+(id)proxyObject;
+(id)proxyObjectAsync;
+(id)serviceInterface;
+(id)sharedConnection;
+(id)sharedConnectionAccessQueue;
+(void)setSharedConnection:(id)arg0 ;


@end


#endif