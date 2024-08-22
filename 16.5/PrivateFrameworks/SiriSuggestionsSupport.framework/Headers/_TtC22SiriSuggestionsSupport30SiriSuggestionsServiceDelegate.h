// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22SIRISUGGESTIONSSUPPORT30SIRISUGGESTIONSSERVICEDELEGATE_H
#define _TTC22SIRISUGGESTIONSSUPPORT30SIRISUGGESTIONSSERVICEDELEGATE_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC22SiriSuggestionsSupport30SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate>

 {
    ? client;
    ? eventDrivenClient;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif