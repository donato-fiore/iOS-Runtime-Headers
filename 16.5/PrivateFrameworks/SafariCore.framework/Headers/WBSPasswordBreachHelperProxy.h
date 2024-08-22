// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDBREACHHELPERPROXY_H
#define WBSPASSWORDBREACHHELPERPROXY_H

@class NSXPCConnection;
@protocol WBSPasswordBreachHelperProtocol;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol>

 {
    NSXPCConnection *_connection;
    os_unfair_lock_s _connectionLock;
}




-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)addResultRecordDictionaries:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearAllRecordsWithCompletionHandler:(id)arg0 ;
-(void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidate;
-(void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id)arg0 ;
-(void)runLookupSessionIgnoringMinimumDelay:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif