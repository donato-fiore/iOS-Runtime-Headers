// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSINGLECREDITCARDDATA_H
#define SFSINGLECREDITCARDDATA_H

@class WBSSingleCreditCardData, NSString;



@interface SFSingleCreditCardData : WBSSingleCreditCardData

@property (readonly, copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (readonly, copy, nonatomic) NSString *headerText; // ivar: _headerText


-(id)initWithHeaderText:(id)arg0 displayText:(id)arg1 type:(NSInteger)arg2 value:(id)arg3 ;


@end


#endif