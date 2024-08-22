// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEEXTENSIONDISCOVERYRESULT_H
#define MUPLACEEXTENSIONDISCOVERYRESULT_H

@class GEOAppleMediaServicesResult, _MXExtension, NSString;

#import <Foundation/Foundation.h>


@interface MUPlaceExtensionDiscoveryResult : NSObject

@property (readonly, nonatomic) GEOAppleMediaServicesResult *appStoreApp; // ivar: _appStoreApp
@property (readonly, nonatomic) _MXExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier


-(id)initWithExtension:(id)arg0 appStoreApp:(id)arg1 vendorIdentifier:(id)arg2 ;


@end


#endif