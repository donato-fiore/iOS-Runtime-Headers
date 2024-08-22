// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTRANSLITERATECHINESESTEP_H
#define CHTRANSLITERATECHINESESTEP_H



#import "CHPostprocessingStep.h"

@interface CHTransliterateChineseStep : CHPostprocessingStep

@property (nonatomic) **void icuTransliterator; // ivar: _icuTransliterator


-(id)init;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif