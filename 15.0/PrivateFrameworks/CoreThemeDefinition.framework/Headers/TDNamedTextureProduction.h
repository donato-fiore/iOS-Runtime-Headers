// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDNAMEDTEXTUREPRODUCTION_H
#define TDNAMEDTEXTUREPRODUCTION_H



#import "TDElementProduction.h"
#import "TDTextureInterpretation.h"

@interface TDNamedTextureProduction : TDElementProduction

@property (nonatomic) BOOL optOutOfThinning;
@property (retain, nonatomic) TDTextureInterpretation *textureInterpretation;




@end


#endif