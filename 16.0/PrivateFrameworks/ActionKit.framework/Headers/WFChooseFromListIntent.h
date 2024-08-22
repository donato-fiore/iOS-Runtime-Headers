// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCHOOSEFROMLISTINTENT_H
#define WFCHOOSEFROMLISTINTENT_H

@class INIntent, NSArray, NSString;



@interface WFChooseFromListIntent : INIntent

@property (copy, nonatomic) NSArray *chosenItems;
@property (copy, nonatomic) NSArray *originalItems;
@property (copy, nonatomic) NSString *prompt;




@end


#endif