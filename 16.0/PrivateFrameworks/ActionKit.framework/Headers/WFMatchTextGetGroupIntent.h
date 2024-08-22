// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMATCHTEXTGETGROUPINTENT_H
#define WFMATCHTEXTGETGROUPINTENT_H

@class INIntent, NSNumber, NSArray;



@interface WFMatchTextGetGroupIntent : INIntent

@property (copy, nonatomic) NSNumber *groupIndex;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) NSInteger type;




@end


#endif