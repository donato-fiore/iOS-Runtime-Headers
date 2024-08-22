// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18SIRISUGGESTIONSAPI26CONTINUATIONBASEDXPCBRIDGE_H
#define _TTC18SIRISUGGESTIONSAPI26CONTINUATIONBASEDXPCBRIDGE_H

@protocol _TtP18SiriSuggestionsAPI15XPCClientBridge_;

#import <Foundation/Foundation.h>


@interface _TtC18SiriSuggestionsAPI26ContinuationBasedXPCBridge : NSObject <_TtP18SiriSuggestionsAPI15XPCClientBridge_>

 {
    ? continuation;
}




-(id)init;
-(void)connectionErrorWithError:(id)arg0 ;
-(void)sendSuggestionsWithSuggestions:(id)arg0 ;


@end


#endif