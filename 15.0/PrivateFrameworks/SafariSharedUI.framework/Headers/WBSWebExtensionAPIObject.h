// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIOBJECT_H
#define WBSWEBEXTENSIONAPIOBJECT_H

@class NSUUID;
@protocol WBSJSCallbackHandlerErrorReporter;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionAPIRuntimeObjC.h"

@interface WBSWebExtensionAPIObject : NSObject

@property (readonly, nonatomic) NSObject<WBSJSCallbackHandlerErrorReporter> *callbackErrorReporter;
@property (readonly, nonatomic) NSUUID *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, nonatomic) BOOL isForMainWorld; // ivar: _isForMainWorld
@property (readonly, weak, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime; // ivar: _runtime


-(void)initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;


@end


#endif