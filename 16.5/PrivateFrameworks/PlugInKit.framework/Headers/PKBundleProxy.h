// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBUNDLEPROXY_H
#define PKBUNDLEPROXY_H

@class NSString, NSURL, NSDictionary, LSBundleProxy;
@protocol PKBundleProxy;

#import <Foundation/Foundation.h>


@interface PKBundleProxy : NSObject <PKBundleProxy>



@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) LSBundleProxy *lsObject; // ivar: _lsObject
@property (readonly, nonatomic) NSURL *relativeAppStoreReceiptURL;
@property (readonly) Class superclass;


-(id)initWithLSBundleProxy:(id)arg0 ;


@end


#endif