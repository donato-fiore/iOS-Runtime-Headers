// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPCONTEXTNOTIFYINGOBSERVER_H
#define IDSGROUPCONTEXTNOTIFYINGOBSERVER_H

@class NSMutableSet;
@protocol IDSGroupContextObserverDaemonProtocol;

#import <Foundation/Foundation.h>


@interface IDSGroupContextNotifyingObserver : NSObject <IDSGroupContextObserverDaemonProtocol>



@property (retain, nonatomic) NSMutableSet *delegates; // ivar: _delegates


-(id)init;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didCacheGroup:(id)arg0 completion:(id)arg1 ;
-(void)didCreateGroup:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg0 completion:(id)arg1 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(id)arg0 ;
-(void)didUpdateGroup:(id)arg0 withNewGroup:(id)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif