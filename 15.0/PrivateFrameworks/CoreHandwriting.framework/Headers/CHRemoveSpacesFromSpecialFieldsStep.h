// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHREMOVESPACESFROMSPECIALFIELDSSTEP_H
#define CHREMOVESPACESFROMSPECIALFIELDSSTEP_H



#import "CHPostprocessingStep.h"
#import "CHPatternNetwork.h"

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStep

@property (nonatomic) BOOL capitalizationToSplit; // ivar: _capitalizationToSplit
@property (nonatomic) BOOL convertToLowercase; // ivar: _convertToLowercase
@property (retain, nonatomic) CHPatternNetwork *patternFST; // ivar: _patternFST
@property (nonatomic) NSInteger patternType; // ivar: _patternType


-(id)initWithPatternFst:(id)arg0 patternType:(NSInteger)arg1 capitalizationToSplit:(BOOL)arg2 convertToLowercase:(BOOL)arg3 ;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif