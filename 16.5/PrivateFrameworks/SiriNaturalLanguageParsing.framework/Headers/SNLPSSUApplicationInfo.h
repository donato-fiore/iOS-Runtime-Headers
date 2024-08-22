// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPSSUAPPLICATIONINFO_H
#define SNLPSSUAPPLICATIONINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SNLPSSUApplicationInfo : NSObject

@property (readonly) NSURL *assetURL; // ivar: _assetURL
@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(id)applicationInfoWithBundleIdentifier:(id)arg0 assetURL:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 assetURL:(id)arg1 ;


@end


#endif