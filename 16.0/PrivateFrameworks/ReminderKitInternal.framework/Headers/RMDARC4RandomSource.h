// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMDARC4RANDOMSOURCE_H
#define RMDARC4RANDOMSOURCE_H

@class NSData;


#import "RMDRandomSource.h"

@interface RMDARC4RandomSource : RMDRandomSource {
    *Arc4State _state;
    NSData *_seed;
}


@property (copy, nonatomic) NSData *seed;


-(BOOL)nextBool;
-(NSInteger)nextInt;
-(NSUInteger)nextBits:(int)arg0 ;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(float)nextUniform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(void)dealloc;
-(void)dropValuesWithCount:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif