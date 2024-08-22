// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHRANDOMOPDESCRIPTOR_H
#define MPSGRAPHRANDOMOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphRandomOpDescriptor : NSObject <NSCopying>



@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (nonatomic) NSUInteger distribution; // ivar: _distribution
@property (nonatomic) float max; // ivar: _max
@property (nonatomic) NSInteger maxInteger; // ivar: _maxInteger
@property (nonatomic) float mean; // ivar: _mean
@property (nonatomic) float min; // ivar: _min
@property (nonatomic) NSInteger minInteger; // ivar: _minInteger
@property (nonatomic) NSUInteger samplingMethod; // ivar: _samplingMethod
@property (nonatomic) float standardDeviation; // ivar: _standardDeviation


+(id)descriptorWithDistribution:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif