// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC22SIRISUGGESTIONSSUPPORT25SIRISUGGESTIONSXPCSERVICE_H
#define _TTC22SIRISUGGESTIONSSUPPORT25SIRISUGGESTIONSXPCSERVICE_H

@class SwiftObject;
@protocol _TtP22SiriSuggestionsSupport27SiriSuggestionsXPCInterface_;



@interface _TtC22SiriSuggestionsSupport25SiriSuggestionsXPCService : SwiftObject <_TtP22SiriSuggestionsSupport27SiriSuggestionsXPCInterface_>

 {
    ? client;
}




-(void)refreshServiceWithCompletion:(id)arg0 ;
-(void)submitFor:(id)arg0 propertyKey:(id)arg1 propertyValue:(id)arg2 completion:(id)arg3 ;
-(void)suggestNextWithRequestId:(id)arg0 extraStateStoreProperties:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif