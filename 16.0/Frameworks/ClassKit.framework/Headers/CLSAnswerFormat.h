// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSANSWERFORMAT_H
#define CLSANSWERFORMAT_H



#import "CLSAbstractAnswerFormat.h"

@interface CLSAnswerFormat : CLSAbstractAnswerFormat {
    NSInteger _answerFormatType;
}




+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(NSInteger)answerFormatType;
-(id)_init;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAnswerFormatType:(NSInteger)arg0 ;


@end


#endif