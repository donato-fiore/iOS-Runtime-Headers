// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDCATALOGGLOBALS_H
#define TDCATALOGGLOBALS_H

@class NSManagedObject;



@interface TDCatalogGlobals : NSManagedObject {
    NSUInteger _defaultBlendMode;
    BOOL _allowsVibrancy;
    BOOL _supportsWhitePointAdjustments;
    BOOL _supportsBrightnessAdjustments;
    BOOL _allowsSystemTintColors;
    BOOL _allowsCustomTintColors;
    BOOL _supportsMultipleAppearancesForEffects;
}


@property (nonatomic) BOOL allowsCustomTintColors;
@property (nonatomic) BOOL allowsSystemTintColors;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) NSUInteger defaultBlendMode;
@property (nonatomic) BOOL supportsBrightnessAdjustments;
@property (nonatomic) BOOL supportsMultipleAppearancesForEffects;
@property (nonatomic) BOOL supportsWhitePointAdjustments;


-(id)dictionaryForArchiving;


@end


#endif