// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWEBPROCESSPLUGINCONTROLLER_H
#define WKWEBPROCESSPLUGINCONTROLLER_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKConnection.h"

@interface WKWebProcessPlugInController : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundle> _bundle;
    RetainPtr<id<WKWebProcessPlugIn>> _principalClassInstance;
}


@property (readonly) *Object _apiObject;
@property (readonly) *OpaqueWKBundle _bundleRef;
@property (readonly) WKConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) id *parameters;
@property (readonly) Class superclass;


-(void)_setPrincipalClassInstance:(id)arg0 ;
-(void)dealloc;
-(void)extendClassesForParameterCoder:(id)arg0 ;


@end


#endif