// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKFORINPUTRESULT_H
#define WFASKFORINPUTRESULT_H

@class INObject, NSDateComponents, NSNumber, NSString, NSURL;



@interface WFAskForInputResult : INObject

@property (copy, nonatomic) NSDateComponents *dateAndTimeValue;
@property (copy, nonatomic) NSDateComponents *dateValue;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDateComponents *timeValue;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSURL *urlValue;




@end


#endif