// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLDENSEVECTOR_H
#define PMLDENSEVECTOR_H

@class NSMutableData, NSData;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableData *_data;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) *float ptr;


+(id)denseVectorFromNumbers:(id)arg0 ;
-(float)cosineDistanceFrom:(id)arg0 ;
-(float)density;
-(float)l1norm;
-(float)l2norm;
-(float)maxValue;
-(float)minValue;
-(float)valueAt:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCount:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFloats:(*float)arg0 count:(NSUInteger)arg1 ;
-(id)initWithFloatsNoCopy:(*float)arg0 count:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithFloatsNoCopy:(*float)arg0 count:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithNumbers:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sliceFrom:(int)arg0 to:(int)arg1 ;
-(id)vecByAppendingVec:(id)arg0 ;
-(void)enumerateNonZeroValuesWithBlock:(id)arg0 ;
-(void)enumerateValuesWithBlock:(id)arg0 ;


@end


#endif