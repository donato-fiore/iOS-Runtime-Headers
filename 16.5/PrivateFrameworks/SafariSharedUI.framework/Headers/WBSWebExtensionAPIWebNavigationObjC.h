// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPIWEBNAVIGATIONOBJC_H
#define WBSWEBEXTENSIONAPIWEBNAVIGATIONOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIWebNavigationEventObjC.h"

@interface WBSWebExtensionAPIWebNavigationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebNavigationEventObjC *_onBeforeNavigate;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCommitted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onDOMContentLoaded;
    WBSWebExtensionAPIWebNavigationEventObjC *_onCompleted;
    WBSWebExtensionAPIWebNavigationEventObjC *_onErrorOccurred;
}






@end


#endif