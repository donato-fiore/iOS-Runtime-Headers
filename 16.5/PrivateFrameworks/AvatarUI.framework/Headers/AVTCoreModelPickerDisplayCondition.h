// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODELPICKERDISPLAYCONDITION_H
#define AVTCOREMODELPICKERDISPLAYCONDITION_H


#import <Foundation/Foundation.h>


@interface AVTCoreModelPickerDisplayCondition : NSObject

@property (readonly, nonatomic) NSUInteger targetSectionIndex; // ivar: _targetSectionIndex
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(NSUInteger)conditionValueFromString:(id)arg0 ;
+(id)displayConditionFromDictionnary:(id)arg0 ;
-(id)initWithTargetSectionIndex:(NSUInteger)arg0 value:(NSUInteger)arg1 ;


@end


#endif