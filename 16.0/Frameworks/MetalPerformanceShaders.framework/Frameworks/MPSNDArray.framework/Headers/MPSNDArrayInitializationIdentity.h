// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYINITIALIZATIONIDENTITY_H
#define MPSNDARRAYINITIALIZATIONIDENTITY_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationIdentity : MPSNDArrayInitialization



-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;


@end


#endif