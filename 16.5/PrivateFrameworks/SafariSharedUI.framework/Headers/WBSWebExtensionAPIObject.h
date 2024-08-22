// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPIOBJECT_H
#define WBSWEBEXTENSIONAPIOBJECT_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionAPIRuntimeBase.h"

@interface WBSWebExtensionAPIObject : NSObject {
    BOOL _isForMainWorld;
    NSUUID *_extensionIdentifier;
}


@property (readonly, weak, nonatomic) WBSWebExtensionAPIRuntimeBase *runtime; // ivar: _runtime


-(void)initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;


@end


#endif