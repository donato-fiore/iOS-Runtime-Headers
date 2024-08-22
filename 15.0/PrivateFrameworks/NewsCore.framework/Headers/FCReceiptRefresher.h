// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCRECEIPTREFRESHER_H
#define FCRECEIPTREFRESHER_H

@class NSString, NFPendingPromise, SKReceiptRefreshRequest;
@protocol SKRequestDelegate, FCReceiptRefresherType;

#import <Foundation/Foundation.h>


@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFPendingPromise *pendingPromise; // ivar: _pendingPromise
@property (retain, nonatomic) SKReceiptRefreshRequest *request; // ivar: _request
@property (copy, nonatomic) NSString *restoreBundleID; // ivar: _restoreBundleID
@property (readonly) Class superclass;


-(id)refreshForPurchase:(id)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;


@end


#endif