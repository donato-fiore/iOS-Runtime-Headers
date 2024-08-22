// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDEXTENSIONAPPLICATIONINFO_H
#define __HMDEXTENSIONAPPLICATIONINFO_H

@class HMDBundleApplicationInfo;


#import "HMDApplicationInfo.h"

@interface __HMDExtensionApplicationInfo : HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInstalled;
-(id)attributeDescriptions;
-(id)hostApplicationInfo;
-(id)initWithRecord:(id)arg0 ;
-(id)vendorIdentifier;


@end


#endif