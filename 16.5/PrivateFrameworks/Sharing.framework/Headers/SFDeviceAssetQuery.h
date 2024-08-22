// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICEASSETQUERY_H
#define SFDEVICEASSETQUERY_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SFDeviceAssetQuery : NSObject

@property (readonly, nonatomic) NSDictionary *additionalQueryParameters; // ivar: _additionalQueryParameters
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *color; // ivar: _color
@property (readonly, nonatomic) NSString *effectiveProductType;
@property (nonatomic) BOOL h264; // ivar: _h264
@property (nonatomic) BOOL legacyAsset; // ivar: _legacyAsset
@property (retain, nonatomic) NSString *mappedProductType; // ivar: _mappedProductType
@property (readonly, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) *LogCategory ucat; // ivar: _ucat
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)deviceWantsH264;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAssetType:(id)arg0 productType:(id)arg1 ;
-(id)initWithBluetoothProductIdentifier:(NSUInteger)arg0 color:(NSUInteger)arg1 ;
-(id)initWithHomePodColor:(NSUInteger)arg0 ;
-(id)initWithHomePodColor:(NSUInteger)arg0 version:(unsigned int)arg1 ;
-(id)initWithProductType:(id)arg0 additionalQueryParameters:(id)arg1 ;
-(id)initWithSingleHomePodColor:(unsigned char)arg0 version:(unsigned int)arg1 ;
-(id)initWithTagColor:(NSUInteger)arg0 ;
-(id)loggingProductType;
-(void)dealloc;


@end


#endif