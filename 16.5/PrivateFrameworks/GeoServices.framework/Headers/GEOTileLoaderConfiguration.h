// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILELOADERCONFIGURATION_H
#define GEOTILELOADERCONFIGURATION_H

@class NSString, NSLocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger backpressureControlCountLimit; // ivar: _backpressureControlCountLimit
@property (copy, nonatomic) NSString *diskCacheLocation; // ivar: _diskCacheLocation
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // ivar: _manifestConfiguration
@property (nonatomic) NSUInteger memoryCacheCostLimit; // ivar: _memoryCacheCostLimit
@property (nonatomic) NSUInteger memoryCacheCountLimit; // ivar: _memoryCacheCountLimit
@property (nonatomic) Class serverProxyClass; // ivar: _serverProxyClass


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif