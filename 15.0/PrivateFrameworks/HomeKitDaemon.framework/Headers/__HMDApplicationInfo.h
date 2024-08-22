// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __HMDAPPLICATIONINFO_H
#define __HMDAPPLICATIONINFO_H

@class HMDBundleApplicationInfo, NSData;



@interface __HMDApplicationInfo : HMDBundleApplicationInfo {
    BOOL _installed;
    NSData *_vendorIdentifier;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInstalled;
-(id)initWithRecord:(id)arg0 ;
-(id)vendorIdentifier;


@end


#endif