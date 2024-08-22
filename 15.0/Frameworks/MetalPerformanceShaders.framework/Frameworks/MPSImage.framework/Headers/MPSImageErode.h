// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGEERODE_H
#define MPSIMAGEERODE_H



#import "MPSImageDilate.h"

@interface MPSImageErode : MPSImageDilate



-(Class)maxClass;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 values:(*float)arg3 ;


@end


#endif