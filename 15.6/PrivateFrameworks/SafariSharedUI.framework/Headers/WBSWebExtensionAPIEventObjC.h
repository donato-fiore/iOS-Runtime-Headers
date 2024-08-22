// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONAPIEVENTOBJC_H
#define WBSWEBEXTENSIONAPIEVENTOBJC_H

@class NSMapTable;


#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
    NSUInteger _type;
}






@end


#endif