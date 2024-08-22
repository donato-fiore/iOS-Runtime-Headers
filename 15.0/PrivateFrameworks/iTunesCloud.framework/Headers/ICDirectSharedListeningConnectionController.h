// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDIRECTSHAREDLISTENINGCONNECTIONCONTROLLER_H
#define ICDIRECTSHAREDLISTENINGCONNECTIONCONTROLLER_H

@class MSVTaskAssertion, MSVQRConnection, NSString;
@protocol MSVQRConnectionDelegate, OS_dispatch_queue;


#import "ICSharedListeningConnectionController.h"
#import "ICLiveLinkQRConnectionDataSource.h"
#import "ICSharedListeningConnectionReport.h"

@interface ICDirectSharedListeningConnectionController : ICSharedListeningConnectionController <MSVQRConnectionDelegate>



@property (retain, nonatomic) MSVTaskAssertion *assertion; // ivar: _assertion
@property (retain, nonatomic) MSVQRConnection *connection; // ivar: _connection
@property (readonly, nonatomic) ICLiveLinkQRConnectionDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) ICSharedListeningConnectionReport *report; // ivar: _report
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithSessionIdentifier:(id)arg0 identity:(id)arg1 bundleID:(id)arg2 ;
-(void)_handleQRDataSourceError:(id)arg0 ;
-(void)connection:(id)arg0 didEndWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)connectionDidStart:(id)arg0 ;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif