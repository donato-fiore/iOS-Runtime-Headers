// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNLOGMELSPECTROGRAMCUSTOMMODELUTILS_H
#define SNLOGMELSPECTROGRAMCUSTOMMODELUTILS_H


#import <Foundation/Foundation.h>


@interface SNLogMelSpectrogramCustomModelUtils : NSObject



+(BOOL)overrideLogMelExtractionParameters:(struct SNLogMelParameters *)arg0 withContentsOfParameterDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)resetLogMelExtractionParameters:(struct SNLogMelParameters *)arg0 overrideWithParameterDictionary:(id)arg1 error:(*id)arg2 ;
// +(BOOL)validateModelDescription:(id)arg0 logMelExtractionParameters:(struct SNLogMelParameters )arg1 withHandler:(id)arg2 error:(unk)arg3  ;
+(id)makeHandlerForFloatParameterWithBlock:(SEL)arg0 ;
+(id)makeHandlerForInt32ParameterWithBlock:(SEL)arg0 ;
+(id)makeHandlerForStringParameterWithChoices:(SEL)arg0 block:(id)arg1 ;
+(id)makeHandlerForUInt32ParameterWithBlock:(SEL)arg0 ;
+(struct SNLogMelParameters )defaultLogMelExtractionParameters;


@end


#endif