// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTHEROIMAGEMANIFEST_H
#define PKPAYMENTHEROIMAGEMANIFEST_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PKPaymentHeroImageManifest : NSObject

@property (readonly, nonatomic) NSDictionary *images; // ivar: _images


+(BOOL)manifestFileExistsForRegion:(id)arg0 ;
+(id)manifestFileForRegion:(id)arg0 ;
+(id)manifestForRegion:(id)arg0 ;
+(void)downloadManifestForRegion:(id)arg0 url:(id)arg1 fileDownloader:(id)arg2 completion:(id)arg3 ;
+(void)removeManifestFileForRegion:(id)arg0 ;
+(void)saveManifestDataToDeviceForRegion:(id)arg0 data:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif