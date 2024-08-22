// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onBeforeNavigate;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onCommitted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onCompleted;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onDOMContentLoaded;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationEventObjC *onErrorOccurred;


+(id)webNavigationWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)getAllFramesWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getFrameWithDetails:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;


@end


#endif