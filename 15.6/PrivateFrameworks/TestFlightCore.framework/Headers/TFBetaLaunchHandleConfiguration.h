// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFBETALAUNCHHANDLECONFIGURATION_H
#define TFBETALAUNCHHANDLECONFIGURATION_H

@class NSString, ASDBetaAppLaunchInfo;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TFBetaLaunchHandleConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) ASDBetaAppLaunchInfo *launchInfo; // ivar: _launchInfo


+(id)configurationFromUserInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedAsUserInfo;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 preloadingLaunchInfo:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 preloadingLaunchInfo:(id)arg1 ;


@end


#endif