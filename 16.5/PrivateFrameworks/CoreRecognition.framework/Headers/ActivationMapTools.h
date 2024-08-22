// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTIVATIONMAPTOOLS_H
#define ACTIVATIONMAPTOOLS_H


#import <Foundation/Foundation.h>


@interface ActivationMapTools : NSObject



+(BOOL)matchLabel:(int)arg0 toModelCharacter:(unsigned short)arg1 ;
+(id)characterCentroidsFromActivationMap:(*void)arg0 codeMap:(*int)arg1 decodedSymbolIndexes:(*id)arg2 ;
+(id)characterCentroidsFromActivationMap:(*void)arg0 codeMap:(*int)arg1 potentialPatterns:(id)arg2 minWordLengthFractionForCorrelationPeak:(float)arg3 bestModelIndex:(*NSInteger)arg4 ;
+(id)decodeStringWithCentroids:(id)arg0 activationMap:(*void)arg1 codeMap:(*int)arg2 model:(id)arg3 ;
+(id)fitSpacingModel:(id)arg0 toActivationMap:(*void)arg1 codeMap:(*int)arg2 minWordLengthFractionForCorrelationPeak:(float)arg3 cost:(*float)arg4 ;
+(id)textFromActivationMap:(*void)arg0 codeMap:(*int)arg1 invert:(BOOL)arg2 ;
+(int)colInImage:(struct vImage_Buffer )arg0 forPoint:(int)arg1 inActivationMapWithSize:(int)arg2 ;
+(void)extractActivationSignals:(*void)arg0 fromActivationMap:(*void)arg1 forModel:(id)arg2 codeMap:(*int)arg3 ;


@end


#endif