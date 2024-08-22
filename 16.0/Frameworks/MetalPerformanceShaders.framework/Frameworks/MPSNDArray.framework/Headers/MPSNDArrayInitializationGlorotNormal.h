// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYINITIALIZATIONGLOROTNORMAL_H
#define MPSNDARRAYINITIALIZATIONGLOROTNORMAL_H



#import "MPSNDArrayInitialization.h"

@interface MPSNDArrayInitializationGlorotNormal : MPSNDArrayInitialization

@property (nonatomic) NSUInteger FanIn; // ivar: _FanIn
@property (nonatomic) NSUInteger FanOut; // ivar: _FanOut


-(NSUInteger)kernelDimensionalityForDestinationArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 seed:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationArray:(id)arg1 ;


@end


#endif