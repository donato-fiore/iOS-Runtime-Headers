// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onAuthRequired;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeRedirect;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeRequest;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onBeforeSendHeaders;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onCompleted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onErrorOccurred;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onHeadersReceived;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onResponseStarted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestEventObjC *onSendHeaders;


+(id)webRequestWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;


@end


#endif