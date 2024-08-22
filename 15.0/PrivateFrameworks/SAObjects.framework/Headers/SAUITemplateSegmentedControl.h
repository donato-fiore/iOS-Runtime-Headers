// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATESEGMENTEDCONTROL_H
#define SAUITEMPLATESEGMENTEDCONTROL_H

@class NSDictionary, NSArray;


#import "SAUITemplateBaseItem.h"

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *backgroundColors;
@property (copy, nonatomic) NSDictionary *textColors;
@property (copy, nonatomic) NSArray *titles;


+(id)segmentedControl;
+(id)segmentedControlWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif