// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSERVICECONNECTIONMANAGER_H
#define HDSERVICECONNECTIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDHealthServiceManager.h"

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver>

 {
    HDProfile *_profile;
    HDHealthServiceManager *_serviceManager;
    BOOL _connecting;
    BOOL _BTLEEnabled;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)connectToService:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)disconnectFromService:(id)arg0 ;
-(void)disconnectFromServices;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)reconnectToServices;


@end


#endif