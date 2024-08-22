// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHLISTTYPE_H
#define MPSGRAPHLISTTYPE_H



#import "MPSGraphType.h"

@interface MPSGraphListType : MPSGraphType

@property (copy) MPSGraphType *elementType; // ivar: _elementType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementType:(id)arg0 ;


@end


#endif