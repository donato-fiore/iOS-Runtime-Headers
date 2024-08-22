// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSHAPEDTYPE_H
#define MPSGRAPHSHAPEDTYPE_H

@class NSArray;


#import "MPSGraphType.h"

@interface MPSGraphShapedType : MPSGraphType

@property unsigned int dataType; // ivar: _dataType
@property (copy) NSArray *shape; // ivar: _shape


-(BOOL)isEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithShape:(id)arg0 dataType:(unsigned int)arg1 ;


@end


#endif