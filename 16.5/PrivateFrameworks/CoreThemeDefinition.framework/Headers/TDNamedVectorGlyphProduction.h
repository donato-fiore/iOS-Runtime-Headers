// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDNAMEDVECTORGLYPHPRODUCTION_H
#define TDNAMEDVECTORGLYPHPRODUCTION_H



#import "TDNamedArtworkProduction.h"
#import "TDThemeVectorGlyphRenderingMode.h"

@interface TDNamedVectorGlyphProduction : TDNamedArtworkProduction

@property (retain, nonatomic) TDThemeVectorGlyphRenderingMode *vectorGlyphRenderingMode;


+(id)fetchRequest;


@end


#endif