// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LABASESERVICEMANAGER_H
#define LABASESERVICEMANAGER_H

@class NSMutableDictionary, NSString;
@protocol LAServiceManager;


#import "LABaseService.h"

@interface LABaseServiceManager : LABaseService <LAServiceManager>

 {
    NSMutableDictionary *_sessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sessionsCount;
@property (readonly) Class superclass;


+(id)exportedInterface;
-(BOOL)allowsMultipleClientsForServiceType:(id)arg0 ;
-(id)init;
-(void)_shutdownSessionsWithServiceType:(id)arg0 ;
-(void)bootstrapServiceWithType:(id)arg0 clientConnection:(id)arg1 completionHandler:(id)arg2 ;
-(void)bootstrapSessionServiceType:(id)arg0 clientID:(id)arg1 clientConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)bootstrapSessionServiceType:(id)arg0 clientID:(id)arg1 completionHandler:(id)arg2 ;
-(void)shutdownSessionsWithMatchingID:(id)arg0 ;


@end


#endif