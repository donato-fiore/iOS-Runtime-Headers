// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPLITTEXTINTENT_H
#define WFSPLITTEXTINTENT_H

@class INIntent, NSString, NSArray;



@interface WFSplitTextIntent : INIntent

@property (copy, nonatomic) NSString *customSeparator;
@property (nonatomic) NSInteger separator;
@property (copy, nonatomic) NSArray *text;




@end


#endif