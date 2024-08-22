// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12APPANALYTICS14SESSIONMANAGER_H
#define _TTC12APPANALYTICS14SESSIONMANAGER_H

@class SwiftObject;
@protocol AAFlushable;



@interface _TtC12AppAnalytics14SessionManager : SwiftObject <AAFlushable>

 {
    ? tracker;
    ? processorManager;
    ? appSessionProvider;
    ? accessQueue;
    ? accessGroup;
    ? sessionGroupManager;
    ? state;
    ? dataStacks;
    ? observers;
    ? options;
    ? flushProcessor;
    ? timestampJitter;
}




-(void)flushWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif