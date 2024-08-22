// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHPRUNINGDESCRIPTOR_H
#define MPSGRAPHPRUNINGDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphPruningDescriptor : NSObject <NSCopying>



@property (nonatomic) NSInteger pruningMetric; // ivar: _pruningMetric
@property (nonatomic) NSInteger pruningStructure; // ivar: _pruningStructure
@property (nonatomic) float sparsity; // ivar: _sparsity


+(id)descriptorWithPruningMetric:(NSInteger)arg0 sparsityFormat:(NSInteger)arg1 sparsity:(float)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif