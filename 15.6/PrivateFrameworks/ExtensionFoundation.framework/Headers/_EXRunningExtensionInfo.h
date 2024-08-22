// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXRUNNINGEXTENSIONINFO_H
#define _EXRUNNINGEXTENSIONINFO_H

@class NSString;
@protocol EXExtensionInfoProviding;

#import <Foundation/Foundation.h>


@interface _EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, nonatomic) NSString *containingViewControllerClassName; // ivar: _containingViewControllerClassName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *runLoopType; // ivar: _runLoopType
@property (readonly) Class superclass;


+(id)extensionInfoForCurrentProcess;
+(void)notifyExtensionMainCalled;
-(id)initForCurrentProcess;


@end


#endif