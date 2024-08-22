// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWEBPROCESSPLUGINHITTESTRESULT_H
#define WKWEBPROCESSPLUGINHITTESTRESULT_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKWebProcessPlugInNodeHandle.h"

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif