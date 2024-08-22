// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMATCHTEXTINTENT_H
#define WFMATCHTEXTINTENT_H

@class INIntent, NSNumber, NSString;



@interface WFMatchTextIntent : INIntent

@property (copy, nonatomic) NSNumber *caseSensitive;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSString *text;




@end


#endif