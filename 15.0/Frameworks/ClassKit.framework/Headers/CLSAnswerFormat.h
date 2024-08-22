// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSANSWERFORMAT_H
#define CLSANSWERFORMAT_H



#import "CLSObject.h"

@interface CLSAnswerFormat : CLSObject {
    NSInteger _answerFormatType;
}


@property (readonly, nonatomic) NSInteger answerFormatType;


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif