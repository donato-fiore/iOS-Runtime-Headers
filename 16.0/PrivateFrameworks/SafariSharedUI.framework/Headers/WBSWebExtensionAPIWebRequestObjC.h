// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONAPIWEBREQUESTOBJC_H
#define WBSWEBEXTENSIONAPIWEBREQUESTOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIWebRequestEventObjC.h"

@interface WBSWebExtensionAPIWebRequestObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeRequest;
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeSendHeaders;
    WBSWebExtensionAPIWebRequestEventObjC *_onSendHeaders;
    WBSWebExtensionAPIWebRequestEventObjC *_onHeadersReceived;
    WBSWebExtensionAPIWebRequestEventObjC *_onAuthRequired;
    WBSWebExtensionAPIWebRequestEventObjC *_onBeforeRedirect;
    WBSWebExtensionAPIWebRequestEventObjC *_onResponseStarted;
    WBSWebExtensionAPIWebRequestEventObjC *_onCompleted;
    WBSWebExtensionAPIWebRequestEventObjC *_onErrorOccurred;
}






@end


#endif