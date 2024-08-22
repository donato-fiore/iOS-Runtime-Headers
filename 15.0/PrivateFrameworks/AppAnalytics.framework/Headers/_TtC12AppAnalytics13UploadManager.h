// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12APPANALYTICS13UPLOADMANAGER_H
#define _TTC12APPANALYTICS13UPLOADMANAGER_H

@class SwiftObject;
@protocol AAFlushable;



@interface _TtC12AppAnalytics13UploadManager : SwiftObject <AAFlushable>

 {
    ? service;
    ? dropbox;
    ? config;
    ? batchIdentifiers;
    ? flushQueue;
}




-(void)flushWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif