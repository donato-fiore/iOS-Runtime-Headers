// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISCREENSHOT_H
#define SKUISCREENSHOT_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding>

 {
    NSMutableDictionary *_urls;
    NSMutableDictionary *_sizes;
    NSString *_urlTemplate;
}


@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfVariants;
@property (readonly, nonatomic) NSString *orientationString; // ivar: _orientation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)URLForVariant:(id)arg0 ;
-(id)_firstVariant;
-(id)_initSKUIScreenshot;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithScreenshotDictionary:(id)arg0 ;
-(struct CGSize )sizeForVariant:(id)arg0 ;
-(void)_addURLsFromDictionary:(id)arg0 withRemoteLocalKeysMap:(id)arg1 ;
-(void)setArtwork:(id)arg0 forVariant:(id)arg1 ;


@end


#endif