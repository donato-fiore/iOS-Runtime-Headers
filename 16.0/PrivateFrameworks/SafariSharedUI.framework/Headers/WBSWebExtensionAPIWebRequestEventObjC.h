// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONAPIWEBREQUESTEVENTOBJC_H
#define WBSWEBEXTENSIONAPIWEBREQUESTEVENTOBJC_H

@class NSMapTable;


#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIWebRequestEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
    NSUInteger _type;
}






@end


#endif