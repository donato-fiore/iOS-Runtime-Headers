// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMBINETEXTINTENT_H
#define WFCOMBINETEXTINTENT_H

@class INIntent, NSString, NSArray;



@interface WFCombineTextIntent : INIntent

@property (copy, nonatomic) NSString *customSeparator;
@property (nonatomic) NSInteger separator;
@property (copy, nonatomic) NSArray *text;




@end


#endif