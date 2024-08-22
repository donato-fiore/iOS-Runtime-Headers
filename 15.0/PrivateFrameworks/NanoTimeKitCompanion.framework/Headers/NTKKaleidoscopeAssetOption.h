// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKKALEIDOSCOPEASSETOPTION_H
#define NTKKALEIDOSCOPEASSETOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger asset;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithAsset:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;


@end


#endif