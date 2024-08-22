// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHREORDERSCTCCONFUSIONSTEP_H
#define CHREORDERSCTCCONFUSIONSTEP_H



#import "CHPostprocessingStep.h"

@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) **void icuTransliterator; // ivar: _icuTransliterator
@property (nonatomic) NSInteger maxResultCount; // ivar: _maxResultCount


-(id)initWithMaxResultCount:(NSInteger)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif