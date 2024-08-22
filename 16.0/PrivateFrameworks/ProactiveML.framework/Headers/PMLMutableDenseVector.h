// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLMUTABLEDENSEVECTOR_H
#define PMLMUTABLEDENSEVECTOR_H

@class NSMutableData;
@protocol NSCopying, NSMutableCopying;


#import "PMLDenseVector.h"

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSMutableData *mutableData; // ivar: _mutableData
@property (readonly, nonatomic) *float mutablePtr;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMutableData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)append:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)append:(float)arg0 ;
-(void)processValuesInPlaceWithBlock:(id)arg0 ;
-(void)scaleInPlaceWithFactor:(float)arg0 ;
-(void)scaleInPlaceWithInversedFactor:(float)arg0 ;
-(void)sumInPlaceWithVector:(id)arg0 ;


@end


#endif