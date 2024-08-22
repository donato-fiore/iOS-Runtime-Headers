// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKQUESTIONVALUETODISPLAYNAMETRANSFORMER_H
#define FBKQUESTIONVALUETODISPLAYNAMETRANSFORMER_H

@class NSValueTransformer, NSDictionary;



@interface FBKQuestionValueToDisplayNameTransformer : NSValueTransformer

@property (copy) NSDictionary *dictionary; // ivar: _dictionary


+(Class)transformedValueClass;
-(id)initWithDictionary:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif