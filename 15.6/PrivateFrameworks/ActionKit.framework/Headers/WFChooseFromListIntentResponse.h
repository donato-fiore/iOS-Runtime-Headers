// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMLISTINTENTRESPONSE_H
#define WFCHOOSEFROMLISTINTENTRESPONSE_H

@class INIntentResponse;


#import "WFChooseFromListItem.h"

@interface WFChooseFromListIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) WFChooseFromListItem *selectedItem;


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif