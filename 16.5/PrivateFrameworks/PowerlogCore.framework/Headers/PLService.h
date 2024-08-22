// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSERVICE_H
#define PLSERVICE_H



#import "PLOperator.h"

@interface PLService : PLOperator



+(id)initServices;
+(void)load;
+(void)startServices;
+(void)stopServices;


@end


#endif