// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSEXTENSIONINFO_H
#define FBSEXTENSIONINFO_H

@class NSString;


#import "FBSBundleInfo.h"

@interface FBSExtensionInfo : FBSBundleInfo

@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


-(id)_initWithBundleIdentifier:(id)arg0 url:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg0 url:(id)arg1 ;
-(id)_initWithPlugInKitProxy:(id)arg0 ;


@end


#endif