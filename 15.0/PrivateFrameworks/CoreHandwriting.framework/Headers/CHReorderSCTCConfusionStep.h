// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHREORDERSCTCCONFUSIONSTEP_H
#define CHREORDERSCTCCONFUSIONSTEP_H



#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) **void icuTransliterator; // ivar: _icuTransliterator
@property (nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


-(id)initWithRecognizer:(id)arg0 ;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif