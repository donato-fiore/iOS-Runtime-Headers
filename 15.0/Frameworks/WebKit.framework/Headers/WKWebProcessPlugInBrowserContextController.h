// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWEBPROCESSPLUGINBROWSERCONTEXTCONTROLLER_H
#define WKWEBPROCESSPLUGINBROWSERCONTEXTCONTROLLER_H

@class NSString;
@protocol WKObject, WKWebProcessPlugInEditingDelegate, WKWebProcessPlugInFormDelegatePrivate, WKWebProcessPlugInLoadDelegate;

#import <Foundation/Foundation.h>

#import "_WKRemoteObjectRegistry.h"
#import "WKBrowsingContextHandle.h"
#import "WKWebProcessPlugInFrame.h"
#import "WKDOMDocument.h"
#import "WKWebProcessPlugInPageGroup.h"
#import "WKDOMRange.h"

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebPage> _page;
    WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> _loadDelegate;
    WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> _formDelegate;
    WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> _editingDelegate;
    RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) *OpaqueWKBundlePage _bundlePageRef;
@property (nonatomic, setter=_setDefersLoading:) BOOL _defersLoading;
@property (weak, setter=_setEditingDelegate:) NSObject<WKWebProcessPlugInEditingDelegate> *_editingDelegate;
@property (weak, setter=_setFormDelegate:) NSObject<WKWebProcessPlugInFormDelegatePrivate> *_formDelegate;
@property (readonly, nonatomic) NSString *_groupIdentifier;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (readonly, nonatomic) BOOL _usesNonPersistentWebsiteDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WKBrowsingContextHandle *handle;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WKWebProcessPlugInLoadDelegate> *loadDelegate;
@property (readonly) WKWebProcessPlugInFrame *mainFrame;
@property (readonly) WKDOMDocument *mainFrameDocument;
@property (readonly) WKWebProcessPlugInPageGroup *pageGroup;
@property (readonly) WKDOMRange *selectedRange;
@property (readonly) Class superclass;


+(id)lookUpBrowsingContextFromHandle:(id)arg0 ;
-(void)dealloc;


@end


#endif