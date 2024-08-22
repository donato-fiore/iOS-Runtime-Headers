// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONAPIWEBREQUESTEVENTLISTENER_H
#define WBSWEBEXTENSIONAPIWEBREQUESTEVENTLISTENER_H

@class WBSJSCallbackHandler;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionWebRequestFilter.h"

@interface WBSWebExtensionAPIWebRequestEventListener : NSObject {
    WBSJSCallbackHandler *_callbackHandler;
    WBSWebExtensionWebRequestFilter *_filter;
}






@end


#endif