// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBGEOLOCATIONPOLICYLISTENER_H
#define WEBGEOLOCATIONPOLICYLISTENER_H

@class NSString;
@protocol WebAllowDenyPolicyListener;

#import <Foundation/Foundation.h>


@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>

 {
    RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> _geolocation;
    RetainPtr<WebView> _webView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldClearCache;
-(id)initWithGeolocation:(struct NakedPtr<WebCore::Geolocation> )arg0 forWebView:(id)arg1 ;
-(void)allow;
-(void)deny;
-(void)denyOnlyThisRequest;


@end


#endif