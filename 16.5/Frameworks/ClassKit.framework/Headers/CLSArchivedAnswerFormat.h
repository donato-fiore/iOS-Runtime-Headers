// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSARCHIVEDANSWERFORMAT_H
#define CLSARCHIVEDANSWERFORMAT_H



#import "CLSAbstractAnswerFormat.h"

@interface CLSArchivedAnswerFormat : CLSAbstractAnswerFormat {
    NSInteger _answerFormatType;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)answerFormatType;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAnswerFormatType:(NSInteger)arg0 ;


@end


#endif