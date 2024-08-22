// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPROCESSGROUP_H
#define WKPROCESSGROUP_H

@protocol WKProcessGroupDelegate;

#import <Foundation/Foundation.h>

#import "WKGeolocationProviderIOS.h"

@interface WKProcessGroup : NSObject {
    RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> _processPool;
    WeakObjCPtr<id<WKProcessGroupDelegate>> _delegate;
    RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}


@property (readonly) *OpaqueWKContext _contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (weak, nonatomic) NSObject<WKProcessGroupDelegate> *delegate;


-(id)init;
-(id)initWithInjectedBundleURL:(id)arg0 ;
-(id)initWithInjectedBundleURL:(id)arg0 andCustomClassesForParameterCoder:(id)arg1 ;


@end


#endif