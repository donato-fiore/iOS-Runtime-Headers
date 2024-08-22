// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIWINDOWSEVENTLISTENER_H
#define WBSWEBEXTENSIONAPIWINDOWSEVENTLISTENER_H

@class WBSJSCallbackHandler;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionAPIWindowsEventListener : NSObject

@property (readonly, nonatomic) WBSJSCallbackHandler *callback; // ivar: _callback
@property (readonly, nonatomic) BOOL wantsEventsForNormalWindows; // ivar: _wantsEventsForNormalWindows
@property (readonly, nonatomic) BOOL wantsEventsForPopupWindows; // ivar: _wantsEventsForPopupWindows


-(id)initWithCallback:(id)arg0 wantsEventsForNormalWindows:(BOOL)arg1 wantsEventsForPopupWindows:(BOOL)arg2 ;


@end


#endif