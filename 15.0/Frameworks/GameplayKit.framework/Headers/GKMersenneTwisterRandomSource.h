// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMERSENNETWISTERRANDOMSOURCE_H
#define GKMERSENNETWISTERRANDOMSOURCE_H



#import "GKRandomSource.h"

@interface GKMersenneTwisterRandomSource : GKRandomSource {
    NSUInteger _seed;
    mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> _engine;
}


@property (nonatomic) NSUInteger seed;


+(BOOL)supportsSecureCoding;
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