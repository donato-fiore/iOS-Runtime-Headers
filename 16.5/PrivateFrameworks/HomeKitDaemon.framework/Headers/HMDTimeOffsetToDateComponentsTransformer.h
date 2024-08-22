// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMEOFFSETTODATECOMPONENTSTRANSFORMER_H
#define HMDTIMEOFFSETTODATECOMPONENTSTRANSFORMER_H



#import "HMDValueTransformer.h"

@interface HMDTimeOffsetToDateComponentsTransformer : HMDValueTransformer



+(Class)transformedValueClass;
+(Class)valueClass;
+(id)transformedValue:(id)arg0 error:(*id)arg1 ;
-(id)reverseTransformedValue:(id)arg0 error:(*id)arg1 ;


@end


#endif