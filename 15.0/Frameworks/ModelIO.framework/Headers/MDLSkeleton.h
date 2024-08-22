// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLSKELETON_H
#define MDLSKELETON_H

@class NSArray;
@protocol NSCopying;


#import "MDLObject.h"
#import "MDLMatrix4x4Array.h"

@interface MDLSkeleton : MDLObject <NSCopying>



@property (readonly, nonatomic) MDLMatrix4x4Array *jointBindTransforms; // ivar: _jointBindTransforms
@property (readonly, nonatomic) NSArray *jointPaths; // ivar: _jointPaths
@property (readonly, nonatomic) MDLMatrix4x4Array *jointRestTransforms; // ivar: _jointRestTransforms


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 jointPaths:(id)arg1 ;


@end


#endif