// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT23FINANCESTOREXPCLISTENER_H
#define _TTC10FINANCEKIT23FINANCESTOREXPCLISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10FinanceKit23FinanceStoreXPCListener : NSObject <NSXPCListenerDelegate>

 {
    ? listener;
    ? implementation;
    ? entitlementChecker;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif