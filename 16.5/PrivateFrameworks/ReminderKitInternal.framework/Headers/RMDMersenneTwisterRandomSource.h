// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMDMERSENNETWISTERRANDOMSOURCE_H
#define RMDMERSENNETWISTERRANDOMSOURCE_H



#import "RMDRandomSource.h"

@interface RMDMersenneTwisterRandomSource : RMDRandomSource {
    NSUInteger _seed;
    mersenne_twister_engine<unsigned long long, 64UL, 312UL, 156UL, 31UL, 13043109905998158313ULL, 29UL, 6148914691236517205ULL, 17UL, 8202884508482404352ULL, 37UL, 18444473444759240704ULL, 43UL, 6364136223846793005ULL> _engine;
}


@property (nonatomic) NSUInteger seed;


-(BOOL)nextBool;
-(NSInteger)nextInt;
-(NSUInteger)nextBits:(int)arg0 ;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(float)nextUniform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif