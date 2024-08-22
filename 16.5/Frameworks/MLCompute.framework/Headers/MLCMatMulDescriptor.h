// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCMATMULDESCRIPTOR_H
#define MLCMATMULDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCMatMulDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) float alpha; // ivar: _alpha
@property (readonly, nonatomic) BOOL transposesX; // ivar: _transposesX
@property (readonly, nonatomic) BOOL transposesY; // ivar: _transposesY


+(id)descriptor;
+(id)descriptorWithAlpha:(float)arg0 transposesX:(BOOL)arg1 transposesY:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAlpha:(float)arg0 transposesX:(BOOL)arg1 transposesY:(BOOL)arg2 ;


@end


#endif