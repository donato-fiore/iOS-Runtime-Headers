// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSBUNDLEODRDATAFOREXTENSIONS_H
#define _NSBUNDLEODRDATAFOREXTENSIONS_H

@class NSBundleODRDataCommon;
@protocol NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol;


#import "NSXPCConnection.h"
#import "NSString.h"

@interface _NSBundleODRDataForExtensions : NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)accessSandboxExtension:(id)arg0 ;
-(void)dealloc;
-(void)hostApplicationAssetPacksBecameAvailable:(id)arg0 ;
-(void)hostApplicationAssetPacksBecameUnavailable:(id)arg0 ;


@end


#endif