// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSMEANINGCLUE_H
#define CLSMEANINGCLUE_H



#import "CLSClue.h"

@interface CLSMeaningClue : CLSClue

@property (retain) id *relatedData; // ivar: _relatedData


+(id)clueWithValue:(id)arg0 forKey:(id)arg1 ;
+(id)clueWithValue:(id)arg0 forKey:(id)arg1 confidence:(CGFloat)arg2 relevance:(CGFloat)arg3 ;
-(BOOL)isEqualToClue:(id)arg0 ;
-(id)init;


@end


#endif