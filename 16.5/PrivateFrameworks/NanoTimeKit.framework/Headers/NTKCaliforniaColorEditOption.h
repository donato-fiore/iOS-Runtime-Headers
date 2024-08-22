// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCALIFORNIACOLOREDITOPTION_H
#define NTKCALIFORNIACOLOREDITOPTION_H



#import "NTKFaceColorEditOption.h"

@interface NTKCaliforniaColorEditOption : NTKFaceColorEditOption

@property (readonly, nonatomic) NSUInteger californiaColor;


+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_curatedColorValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)colorNameForColor:(NSUInteger)arg0 ;
+(id)optionWithCaliforniaColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
-(BOOL)isPrideOption;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)pigmentEditOption;


@end


#endif