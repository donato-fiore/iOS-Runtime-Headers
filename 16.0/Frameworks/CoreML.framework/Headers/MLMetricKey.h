// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMETRICKEY_H
#define MLMETRICKEY_H



#import "MLKey.h"

@interface MLMetricKey : MLKey



+(id)epochIndex;
+(id)lossValue;
+(id)miniBatchIndex;
-(id)initWithKeyName:(id)arg0 ;


@end


#endif