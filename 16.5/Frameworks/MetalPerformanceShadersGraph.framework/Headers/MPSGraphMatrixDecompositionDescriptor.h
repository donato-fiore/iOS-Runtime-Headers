// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHMATRIXDECOMPOSITIONDESCRIPTOR_H
#define MPSGRAPHMATRIXDECOMPOSITIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphMatrixDecompositionDescriptor : NSObject <NSCopying>



@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (nonatomic) NSUInteger decompositionType; // ivar: _decompositionType


+(id)descriptorWithDecompositionType:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif