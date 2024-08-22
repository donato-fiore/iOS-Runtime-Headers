// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKTRANSITAPPLETHISTORYFETCHER_H
#define NPKTRANSITAPPLETHISTORYFETCHER_H

@class NSString;
@protocol OS_dispatch_queue, NPKTransitAppletHistoryFetcherDelegate, NFSession;

#import <Foundation/Foundation.h>


@interface NPKTransitAppletHistoryFetcher : NSObject

@property (retain, nonatomic) NSString *aidToFetch; // ivar: _aidToFetch
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (weak, nonatomic) NSObject<NPKTransitAppletHistoryFetcherDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSObject<NFSession> *pendingSessionHandle; // ivar: _pendingSessionHandle


-(id)initWithCallbackQueue:(id)arg0 ;
-(void)_handleActiveSecureElementManagerSession:(id)arg0 ;
-(void)_handleSecureElementSessionFailureWithError:(id)arg0 ;
-(void)requestTransitHistoryFetch;
-(void)setAIDToFetch:(id)arg0 ;


@end


#endif