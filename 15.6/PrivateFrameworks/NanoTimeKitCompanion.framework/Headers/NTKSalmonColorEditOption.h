// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSALMONCOLOREDITOPTION_H
#define NTKSALMONCOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKCuratedColorEditOption.h"

@interface NTKSalmonColorEditOption : NTKCuratedColorEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, nonatomic) NSUInteger color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)curatedColorValuesForDevice:(id)arg0 ;
+(id)domain;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif