// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSIRILANGUAGEVALIDATION_H
#define TPSSIRILANGUAGEVALIDATION_H

@class NSArray;


#import "TPSInclusivityValidation.h"

@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *excludeLanguages;
@property (readonly, nonatomic) NSArray *targetLanguages;


-(id)initWithTargetLanguages:(id)arg0 excludeLanguages:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif