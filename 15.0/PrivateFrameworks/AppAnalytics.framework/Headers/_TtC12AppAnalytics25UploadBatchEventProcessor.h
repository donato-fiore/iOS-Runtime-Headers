// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12APPANALYTICS25UPLOADBATCHEVENTPROCESSOR_H
#define _TTC12APPANALYTICS25UPLOADBATCHEVENTPROCESSOR_H

@class SwiftObject;
@protocol AAFlushable;



@interface _TtC12AppAnalytics25UploadBatchEventProcessor : SwiftObject <AAFlushable>

 {
    ? uploadManager;
    ? currentSession;
    ? isEnabled;
}




-(void)flushWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif