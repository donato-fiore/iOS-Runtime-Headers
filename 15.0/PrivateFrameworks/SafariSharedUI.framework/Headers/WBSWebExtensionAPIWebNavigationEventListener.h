// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIWEBNAVIGATIONEVENTLISTENER_H
#define WBSWEBEXTENSIONAPIWEBNAVIGATIONEVENTLISTENER_H

@class WBSJSCallbackHandler;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionWebNavigationURLFilter.h"

@interface WBSWebExtensionAPIWebNavigationEventListener : NSObject

@property (readonly, nonatomic) WBSJSCallbackHandler *callbackHandler; // ivar: _callbackHandler
@property (readonly, nonatomic) WBSWebExtensionWebNavigationURLFilter *filter; // ivar: _filter


-(id)initWithCallbackHandler:(id)arg0 filter:(id)arg1 ;


@end


#endif