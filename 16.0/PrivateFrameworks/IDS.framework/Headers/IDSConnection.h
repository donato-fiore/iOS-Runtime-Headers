// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCONNECTION_H
#define IDSCONNECTION_H


#import <Foundation/Foundation.h>

#import "_IDSConnection.h"
#import "IDSAccount.h"

@interface IDSConnection : NSObject {
    _IDSConnection *_internal;
}


@property (readonly, nonatomic) _IDSConnection *_internal;
@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, nonatomic) BOOL isActive;


+(id)_connectionWithAccount:(id)arg0 commands:(id)arg1 indirectDelegateCallouts:(BOOL)arg2 ;
-(BOOL)sendData:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(id)_initWithAccount:(id)arg0 commands:(id)arg1 indirectDelegateCallouts:(BOOL)arg2 ;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 commands:(id)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;


@end


#endif