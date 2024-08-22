// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17PROMOTEDCONTENTUI14APPSTOREMODULE_H
#define _TTC17PROMOTEDCONTENTUI14APPSTOREMODULE_H

@class SwiftObject;
@protocol APClientInfoDelegate;



@interface _TtC17PromotedContentUI14AppStoreModule : SwiftObject <APClientInfoDelegate>

 {
    ? theLock;
    ? dataProvider;
    ? greenTeaLogger;
    ? notificationListener;
    ? prefetchingIrisTask;
    ? $__lazy_storage_$_irisParamsStore;
    ? enabledConfigs;
    ? settings;
}




-(void)activeClientInfoUpdated:(id)arg0 ;


@end


#endif