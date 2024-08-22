// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVIMAGEIOTEXTURECONVERTER_H
#define ASVIMAGEIOTEXTURECONVERTER_H



#import "ASVTextureConverter.h"

@interface ASVImageIOTextureConverter : ASVTextureConverter



-(BOOL)canConvertTextureWithDescription:(id)arg0 ;
-(NSInteger)converterType;
-(NSInteger)maxNativeDownsamplingFactorForDownsamplingFactor:(NSInteger)arg0 fileType:(NSInteger)arg1 ;
-(struct ? )estimatedMemoryDeltaForTextureWithDescription:(id)arg0 ;


@end


#endif