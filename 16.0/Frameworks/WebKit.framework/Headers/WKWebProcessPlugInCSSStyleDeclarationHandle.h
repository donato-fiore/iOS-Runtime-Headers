// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWEBPROCESSPLUGINCSSSTYLEDECLARATIONHANDLE_H
#define WKWEBPROCESSPLUGINCSSSTYLEDECLARATIONHANDLE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWebProcessPlugInCSSStyleDeclarationHandle : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundleCSSStyleDeclarationHandle> _cssStyleDeclarationHandle;
}


@property (readonly) *Object _apiObject;
@property (readonly) *void _cssStyleDeclarationHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cssStyleDeclarationHandleWithJSValue:(id)arg0 inContext:(id)arg1 ;
-(void)dealloc;


@end


#endif