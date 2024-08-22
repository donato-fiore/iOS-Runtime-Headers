// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKVIDEOLINKEDANSWER_H
#define SAGKVIDEOLINKEDANSWER_H

@class NSNumber;


#import "SAGKImageLinkedAnswer.h"

@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer

@property (copy, nonatomic) NSNumber *runtimeInMilliseconds;


+(id)videoLinkedAnswer;
+(id)videoLinkedAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif