// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSICONCACHEPRIVACYHELPER_H
#define BPSICONCACHEPRIVACYHELPER_H


#import <Foundation/Foundation.h>


@interface BPSIconCachePrivacyHelper : NSObject



+(id)_naiveHashForString:(id)arg0 ;
+(id)_perDeviceSalt;
+(id)saltedHashForString:(id)arg0 ;
+(void)setCachePath:(id)arg0 ;


@end


#endif