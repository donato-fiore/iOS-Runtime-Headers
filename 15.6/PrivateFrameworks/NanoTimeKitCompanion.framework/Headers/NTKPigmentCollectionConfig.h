// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPIGMENTCOLLECTIONCONFIG_H
#define NTKPIGMENTCOLLECTIONCONFIG_H

@class NSString, NSArray, NSNumber, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKPigmentCollectionConfig : NSObject <NSCopying>



@property (copy, nonatomic) NSString *collectionOverride; // ivar: _collectionOverride
@property (copy, nonatomic) NSString *defaultColorOptionName; // ivar: _defaultColorOptionName
@property (copy, nonatomic) NSString *defaultConfigAttributeName; // ivar: _defaultConfigAttributeName
@property (copy, nonatomic) NSArray *defaultGalleryColorNames; // ivar: _defaultGalleryColorNames
@property (copy, nonatomic) NSNumber *excludesDuotone; // ivar: _excludesDuotone
@property (copy, nonatomic) NSArray *exclusions; // ivar: _exclusions
@property (copy, nonatomic) NSString *fallbackDefaultColorOptionName; // ivar: _fallbackDefaultColorOptionName
@property (copy, nonatomic) NSString *featureFlag; // ivar: _featureFlag
@property (copy, nonatomic) NSNumber *isAddable; // ivar: _isAddable
@property (copy, nonatomic) NSDictionary *migration; // ivar: _migration
@property (copy, nonatomic) NSNumber *sensitivity; // ivar: _sensitivity
@property (copy, nonatomic) NSNumber *sku; // ivar: _sku
@property (copy, nonatomic) NSNumber *sortedByHue; // ivar: _sortedByHue
@property (copy, nonatomic) NSNumber *supportsSlider; // ivar: _supportsSlider


+(BOOL)supportsSecureCoding;
+(id)collectionConfigFromProtoBuffer:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)protoBuffer;
-(void)applyCollectionOverrideNameOnItems:(id)arg0 ;
-(void)overridePropertiesFromConfig:(id)arg0 ;
-(void)removeExcludedItemsFromList:(id)arg0 ;


@end


#endif