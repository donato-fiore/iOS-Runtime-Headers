// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT22FINANCESTOREXPCSERVICE_H
#define _TTC10FINANCEKIT22FINANCESTOREXPCSERVICE_H

@class SwiftObject;
@protocol _TtP10FinanceKit24OrderTrackingXPCProtocol_, _TtP10FinanceKit23FinanceStoreXPCProtocol_;



@interface _TtC10FinanceKit22FinanceStoreXPCService : SwiftObject <_TtP10FinanceKit24OrderTrackingXPCProtocol_, _TtP10FinanceKit23FinanceStoreXPCProtocol_>

 {
    ? implementation;
    ? entitlements;
}




-(?)containsOrderWithOrderTypeIdentifier:(?)arg0 orderIdentifier:(?)arg1 updatedDatecompletionHandler;
-(?)deleteOrderWithOrderTypeIdentifier:(?)arg0 orderIdentifiercompletionHandler;
-(?)refreshOrderWithOrderTypeIdentifier:(?)arg0 orderIdentifiercompletionHandler;
-(?)setOrderMarkedAsCompleteWithOrderTypeIdentifier:(?)arg0 orderIdentifier:(?)arg1 newValue:(?)arg2 modificationDatecompletionHandler;
-(?)updateOrdersShowAsActiveWithNowcompletionHandler;
-(void)containsOrderWithOrderTypeIdentifier:(id)arg0 orderIdentifier:(id)arg1 updatedDate:(id)arg2 completion:(id)arg3 ;
-(void)insertOrUpdateOrderAsyncWithData:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)insertOrUpdateOrderSyncWithData:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif