// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOLLIECOLOREDITOPTION_H
#define NTKCOLLIECOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKFaceColorEditOption.h"

@interface NTKCollieColorEditOption : NTKFaceColorEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)__orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
-(id)_valueToFaceBundleStringDict;
-(id)pigmentEditOption;


@end


#endif