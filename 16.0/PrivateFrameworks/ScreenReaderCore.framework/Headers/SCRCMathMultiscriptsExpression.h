// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCMATHMULTISCRIPTSEXPRESSION_H
#define SCRCMATHMULTISCRIPTSEXPRESSION_H

@class NSArray;


#import "SCRCMathExpression.h"

@interface SCRCMathMultiscriptsExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *base; // ivar: _base
@property (retain, nonatomic) NSArray *postScripts; // ivar: _postScripts
@property (retain, nonatomic) NSArray *preScripts; // ivar: _preScripts


-(id)_appendString:(id)arg0 toDescription:(id)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)_subSuperscriptPairFromDictionary:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(void)_subSuperScriptsDescriptionFromArray:(id)arg0 withSpeakingStyle:(NSInteger)arg1 arePausesAllowed:(BOOL)arg2 outSubscripts:(*id)arg3 outSuperscripts:(*id)arg4 ;


@end


#endif