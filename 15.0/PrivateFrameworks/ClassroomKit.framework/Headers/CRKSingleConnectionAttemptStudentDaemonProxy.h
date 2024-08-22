// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSINGLECONNECTIONATTEMPTSTUDENTDAEMONPROXY_H
#define CRKSINGLECONNECTIONATTEMPTSTUDENTDAEMONPROXY_H

@class CATTaskClient, NSError, NSString;
@protocol CATTaskClientDelegate, CRKRequestPerformingProtocol, CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol>

 {
    id<CRKTransportProviding> *mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    BOOL mDidAttemptToConnect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithTransportProvider:(id)arg0 ;
-(id)operationForRequest:(id)arg0 ;
-(void)client:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)connect;
-(void)connectIfNeeded;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;


@end


#endif