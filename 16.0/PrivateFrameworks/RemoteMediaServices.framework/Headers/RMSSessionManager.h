// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSSESSIONMANAGER_H
#define RMSSESSIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, RMSSessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface RMSSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_sessionManagerQueue;
}


@property (weak, nonatomic) NSObject<RMSSessionManagerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)persistedSessionIdentifiers;
-(id)sessionWithIdentifier:(int)arg0 ;
-(int)_uniqueSessionIdentifier;
-(int)identifierForSession:(id)arg0 ;
-(void)_scheduleSessionExpirationWithIdentifier:(int)arg0 timeout:(int)arg1 ;
-(void)_updatePersistedSessionIdentifiers;
-(void)beginSession:(id)arg0 timeout:(int)arg1 shouldTakePowerAssertion:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)endSessionWithIdentifier:(int)arg0 completionHandler:(id)arg1 ;
-(void)refreshSessionWithIdentifier:(int)arg0 ;


@end


#endif