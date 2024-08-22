// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT12STORESERVICE_H
#define _TTC10FINANCEKIT12STORESERVICE_H

@class SwiftObject;
@protocol _TtP10FinanceKit16StoreXPCProtocol_;



@interface _TtC10FinanceKit12StoreService : SwiftObject <_TtP10FinanceKit16StoreXPCProtocol_>

 {
    ? implementation;
}




+(id)exportedInterface;
-(?)executeWithCloudOrderQuerycompletionHandler;
-(?)forceCloudExportWithCompletionHandler;
-(?)forceCloudImportWithCompletionHandler;
-(void)reindexSpotlight;


@end


#endif