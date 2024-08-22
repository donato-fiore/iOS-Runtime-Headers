// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGCLIENTSERVICE_H
#define MGCLIENTSERVICE_H

@class NSXPCConnection, NSDictionary;
@protocol MGClientInterfaceProtocol, MGServiceInterfaceProtocol, MGClientConnectionProviderProtocol;

#import <Foundation/Foundation.h>


@interface MGClientService : NSObject <MGClientInterfaceProtocol, MGServiceInterfaceProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<MGClientConnectionProviderProtocol> *provider; // ivar: _provider
@property (copy, nonatomic) NSDictionary *queries; // ivar: _queries


+(id)clientServiceWithConnectionProvider:(id)arg0 ;
-(id)init;
-(id)initWithConnectionProvider:(id)arg0 ;
-(void)HomeKitAccessoryOfType:(id)arg0 accessoryIdentifier:(id)arg1 homeIdentifier:(id)arg2 categoryType:(id)arg3 name:(id)arg4 completion:(id)arg5 ;
-(void)addMember:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)createGroupWithType:(id)arg0 name:(id)arg1 members:(id)arg2 completion:(id)arg3 ;
-(void)deleteGroup:(id)arg0 completion:(id)arg1 ;
-(void)query:(id)arg0 didUpdate:(id)arg1 completion:(id)arg2 ;
-(void)removeMember:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)setName:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)startQueryWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)stopQuery:(id)arg0 completion:(id)arg1 ;


@end


#endif