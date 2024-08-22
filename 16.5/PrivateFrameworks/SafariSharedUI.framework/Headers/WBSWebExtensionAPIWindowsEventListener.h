// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPIWINDOWSEVENTLISTENER_H
#define WBSWEBEXTENSIONAPIWINDOWSEVENTLISTENER_H

@class WBSJSCallbackHandler;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionAPIWindowsEventListener : NSObject {
    BOOL _wantsEventsForNormalWindows;
    BOOL _wantsEventsForPopupWindows;
    WBSJSCallbackHandler *_callback;
}






@end


#endif