// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL10HTTPACTION_H
#define _TTC19APPSTOREKITINTERNAL10HTTPACTION_H

@class TtC19AppStoreKitInternal6Action;



@interface _TtC19AppStoreKitInternal10HttpAction : TtC19AppStoreKitInternal6Action {
    ? url;
    ? method;
    ? headers;
    ? body;
    ? isStoreRequest;
    ? needsAuthentication;
    ? retryCount;
    ? disableCache;
    ? successAction;
    ? failureAction;
}






@end


#endif