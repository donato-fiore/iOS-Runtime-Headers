// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONCONTROLLER_H
#define _WKWEBEXTENSIONCONTROLLER_H

@class NSString, NSSet;
@protocol WKObject, _WKWebExtensionControllerDelegate;

#import <Foundation/Foundation.h>

#import "_WKWebExtensionControllerConfiguration.h"

@interface _WKWebExtensionController : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebExtensionController> _webExtensionController;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) *void _webExtensionController;
@property (readonly, copy, nonatomic) _WKWebExtensionControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_WKWebExtensionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *extensionContexts;
@property (readonly, copy, nonatomic) NSSet *extensions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadExtensionContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)unloadExtensionContext:(id)arg0 error:(*id)arg1 ;
-(id)extensionContextForExtension:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif