// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHREMOVESPACESFROMSTRONGURLSANDEMAILSSTEP_H
#define CHREMOVESPACESFROMSTRONGURLSANDEMAILSSTEP_H



#import "CHPostprocessingStepModifyingOriginalTokens.h"
#import "CHPatternNetwork.h"

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) CHPatternNetwork *patternFST; // ivar: _patternFST


-(id)initWithPatternFst:(id)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif