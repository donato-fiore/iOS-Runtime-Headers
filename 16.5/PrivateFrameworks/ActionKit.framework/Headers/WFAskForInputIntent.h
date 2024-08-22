// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKFORINPUTINTENT_H
#define WFASKFORINPUTINTENT_H

@class INIntent, NSNumber, NSDateComponents, NSString, NSURL;



@interface WFAskForInputIntent : INIntent

@property (copy, nonatomic) NSNumber *allowsDecimalNumbers;
@property (copy, nonatomic) NSNumber *allowsMultilineText;
@property (copy, nonatomic) NSNumber *allowsNegativeNumbers;
@property (copy, nonatomic) NSDateComponents *dateAndTimeAnswer;
@property (copy, nonatomic) NSDateComponents *dateAnswer;
@property (copy, nonatomic) NSString *defaultURLAnswer;
@property (copy, nonatomic) NSNumber *numberAnswer;
@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *stringAnswer;
@property (copy, nonatomic) NSDateComponents *timeAnswer;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSURL *urlAnswer;




@end


#endif