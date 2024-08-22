// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONAPIPORTOBJC_H
#define WBSWEBEXTENSIONAPIPORTOBJC_H

@class NSUUID, WKWebProcessPlugInBrowserContextController, NSString, NSDictionary;
@protocol WBSTranslateToJSValue;


#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue>

 {
    NSUUID *_identifier;
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebExtensionAPIEventObjC *_onDisconnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    BOOL _isDisconnected;
    NSString *_name;
    NSDictionary *_sender;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct OpaqueJSValue *)translateToJSValueWithJSContext:(struct OpaqueJSContext *)arg0 ;
-(void)dealloc;


@end


#endif