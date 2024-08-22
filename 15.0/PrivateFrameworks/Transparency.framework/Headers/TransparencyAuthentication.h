// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYAUTHENTICATION_H
#define TRANSPARENCYAUTHENTICATION_H

@class NSArray, NSDate;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface TransparencyAuthentication : NSObject

@property *__SecKey bik; // ivar: _bik
@property (retain) NSArray *certificates; // ivar: _certificates
@property BOOL isSupported; // ivar: _isSupported
@property (retain) NSObject<OS_dispatch_group> *issuanceGroup; // ivar: _issuanceGroup
@property (retain) NSObject<OS_dispatch_queue> *issuanceQueue; // ivar: _issuanceQueue
@property (retain) NSDate *lastLocalFetchTime; // ivar: _lastLocalFetchTime
@property BOOL outstandingRemoteFetchSignal; // ivar: _outstandingRemoteFetchSignal
@property (retain) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)initWithWorkloop:(id)arg0 ;
-(void)dealloc;
-(void)deviceIdentityIssuerCert:(id)arg0 completionHandler:(id)arg1 ;
-(void)issueCert:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)signData:(id)arg0 fetchNow:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)signData:(id)arg0 key:(struct __SecKey *)arg1 certs:(id)arg2 completionHandler:(id)arg3 ;
-(void)signDataWithTimestamp:(id)arg0 fetchNow:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif