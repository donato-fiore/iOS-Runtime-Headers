// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBPROCESSPLUGINFRAME_H
#define WKWEBPROCESSPLUGINFRAME_H

@class NSURL, NSArray, NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "_WKFrameHandle.h"

@interface WKWebProcessPlugInFrame : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebFrame> _frame;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) NSArray *appleTouchIconURLs;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) BOOL containsAnyFormElements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faviconURLs;
@property (readonly, nonatomic) _WKFrameHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMainFrame;
@property (readonly) Class superclass;


+(id)lookUpContentFrameFromWindowOrFrameElement:(id)arg0 ;
+(id)lookUpFrameFromHandle:(id)arg0 ;
+(id)lookUpFrameFromJSContext:(id)arg0 ;
-(BOOL)_hasCustomContentProvider;
-(id)_browserContextController;
-(id)_certificateChain;
-(id)_parentFrame;
-(id)_securityOrigin;
-(id)hitTest:(struct CGPoint )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;
-(id)jsCSSStyleDeclarationForCSSStyleDeclarationHandle:(id)arg0 inWorld:(id)arg1 ;
-(id)jsContextForServiceWorkerWorld:(id)arg0 ;
-(id)jsContextForWorld:(id)arg0 ;
-(id)jsNodeForNodeHandle:(id)arg0 inWorld:(id)arg1 ;
-(id)jsRangeForRangeHandle:(id)arg0 inWorld:(id)arg1 ;
-(struct __SecTrust *)_serverTrust;
-(void)dealloc;


@end


#endif