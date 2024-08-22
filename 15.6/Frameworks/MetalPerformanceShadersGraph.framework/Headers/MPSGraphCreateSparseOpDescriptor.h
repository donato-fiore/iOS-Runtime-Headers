// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHCREATESPARSEOPDESCRIPTOR_H
#define MPSGRAPHCREATESPARSEOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphCreateSparseOpDescriptor : NSObject <NSCopying>



@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (nonatomic) NSUInteger sparseStorageType; // ivar: _sparseStorageType


+(id)descriptorWithStorageType:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif