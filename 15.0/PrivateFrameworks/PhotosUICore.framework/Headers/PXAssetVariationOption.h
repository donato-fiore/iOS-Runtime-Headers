// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETVARIATIONOPTION_H
#define PXASSETVARIATIONOPTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXAssetVariationOption : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic, getter=isRecommended) BOOL recommended; // ivar: _recommended
@property (readonly, nonatomic) NSInteger variationType; // ivar: _variationType


+(id)_localizedNameForVariationType:(NSInteger)arg0 ;
+(id)variationOptionWithType:(NSInteger)arg0 recommended:(BOOL)arg1 current:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVariationOption:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif