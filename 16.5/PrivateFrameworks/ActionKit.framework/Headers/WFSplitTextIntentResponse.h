// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPLITTEXTINTENTRESPONSE_H
#define WFSPLITTEXTINTENTRESPONSE_H

@class INIntentResponse, NSArray;



@interface WFSplitTextIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: _code
@property (copy, nonatomic) NSArray *text;


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif