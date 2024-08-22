// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGCOLORVARIATIONSTORE_H
#define PREDITINGCOLORVARIATIONSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PREditingColorVariationStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistentVariationStorage; // ivar: _persistentVariationStorage
@property (retain, nonatomic) NSMutableDictionary *variationStorage; // ivar: _variationStorage


+(NSUInteger)version;
+(id)posterColorForColor:(id)arg0 withAppliedVariation:(CGFloat)arg1 ;
+(void)performMigrationsIfNeededForStorage:(id)arg0 version:(NSUInteger)arg1 ;
-(id)baseColorForVariedColor:(id)arg0 forContextIdentifier:(id)arg1 variation:(*CGFloat)arg2 forDataLayerPicker:(BOOL)arg3 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithVariationStorage:(id)arg0 version:(NSUInteger)arg1 ;
-(id)variationForPickerColor:(id)arg0 forContextIdentifier:(id)arg1 ;
-(void)resetAllValues;
-(void)setVariation:(CGFloat)arg0 forPickerColor:(id)arg1 forContextIdentifier:(id)arg2 ;


@end


#endif