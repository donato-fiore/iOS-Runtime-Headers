// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL11JSADSOBJECT_H
#define _TTC19APPSTOREKITINTERNAL11JSADSOBJECT_H

@protocol _TtP19AppStoreKitInternalP33_7CB4CED14B113B77F20C05DB25E4442D18JSAdsObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal11JSAdsObject : NSObject <_TtP19AppStoreKitInternalP33_7CB4CED14B113B77F20C05DB25E4442D18JSAdsObjectExports_>

 {
    ? backingService;
}




-(id)fetchOnDeviceAd:(id)arg0 ;
-(id)fetchOnDeviceAdPlacement:(id)arg0 ;
-(id)init;
-(id)isNativeAdLoggingEnabled;
-(id)processAdvertsForSponsoredSearch:(id)arg0 ;
-(id)processAdvertsForSponsoredSearchAndNativeState:(id)arg0 ;
-(void)debugLog:(id)arg0 ;
-(void)setTimeoutForCurrentOnDeviceAdFetch:(id)arg0 ;


@end


#endif