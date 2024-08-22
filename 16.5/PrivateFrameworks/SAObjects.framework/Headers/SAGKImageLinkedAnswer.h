// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKIMAGELINKEDANSWER_H
#define SAGKIMAGELINKEDANSWER_H

@class NSNumber;


#import "SAGKLinkedAnswer.h"
#import "SAUIImageResource.h"

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAUIImageResource *imageResource;


+(id)imageLinkedAnswer;
+(id)imageLinkedAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif