// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKAPPLICATIONPROXY_H
#define WKAPPLICATIONPROXY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface WKApplicationProxy : NSObject

@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL


+(id)applicationsForContainerProxy:(id)arg0 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg0 ;
+(id)watchAppBundleUrlWithContainerUrl:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 ;


@end


#endif