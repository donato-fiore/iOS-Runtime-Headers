// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22SIRISUGGESTIONSSUPPORT25SIRISUGGESTIONSXPCSERVICE_H
#define _TTC22SIRISUGGESTIONSSUPPORT25SIRISUGGESTIONSXPCSERVICE_H

@class SwiftObject;
@protocol _TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface_;



@interface _TtC22SiriSuggestionsSupport25SiriSuggestionsXPCService : SwiftObject <_TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface_>

 {
    ? client;
    ? eventDrivenClient;
    ? connectedAppId;
    ? accessList;
}




-(void)getSuggestionsForAppWithAppBundleId:(id)arg0 placementId:(id)arg1 entities:(id)arg2 bridge:(id)arg3 ;
-(void)refreshServiceWithCompletion:(id)arg0 ;
-(void)submitFor:(id)arg0 propertyKey:(id)arg1 propertyValue:(id)arg2 completion:(id)arg3 ;
-(void)suggestNextWithRequestId:(id)arg0 extraStateStoreProperties:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif