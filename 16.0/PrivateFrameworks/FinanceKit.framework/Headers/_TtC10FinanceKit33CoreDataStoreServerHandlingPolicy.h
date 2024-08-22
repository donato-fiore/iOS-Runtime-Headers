// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT33COREDATASTORESERVERHANDLINGPOLICY_H
#define _TTC10FINANCEKIT33COREDATASTORESERVERHANDLINGPOLICY_H

@class NSXPCStoreServerRequestHandlingPolicy;



@interface _TtC10FinanceKit33CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy



-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg0 ;
-(id)allowableClassesForClientWithContext:(id)arg0 ;
-(id)init;


@end


#endif