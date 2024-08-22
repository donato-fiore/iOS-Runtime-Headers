// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDANSWERFORMAT_H
#define CLSARCHIVEDANSWERFORMAT_H



#import "CLSObject.h"

@interface CLSArchivedAnswerFormat : CLSObject {
    NSInteger _answerFormatType;
}


@property (readonly, nonatomic) NSInteger answerFormatType;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif