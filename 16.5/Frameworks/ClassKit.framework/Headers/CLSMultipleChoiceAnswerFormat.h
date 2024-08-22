// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMULTIPLECHOICEANSWERFORMAT_H
#define CLSMULTIPLECHOICEANSWERFORMAT_H

@class NSArray, NSString;
@protocol CLSRelationable;


#import "CLSAnswerFormat.h"

@interface CLSMultipleChoiceAnswerFormat : CLSAnswerFormat <CLSRelationable>

 {
    NSInteger _type;
}


@property (readonly, nonatomic) NSArray *answerChoiceItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)answerChoiceArraysEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)addAnswerItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAnswerItem:(id)arg0 ;


@end


#endif