// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDURATIONVALUETRANSFORMER_H
#define VUIDURATIONVALUETRANSFORMER_H

@class NSValueTransformer, NSDateComponentsFormatter;



@interface VUIDurationValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // ivar: _hoursMinutesFormatter
@property (retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // ivar: _secondsFormatter


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(void)initialize;
-(id)init;
-(id)transformedValue:(id)arg0 ;


@end


#endif